#include "Headers\mainwindow.h"
#include "Headers\ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    msgBox = new QMessageBox(this);

    // Load and scale the logo image, then set it to label_2
    QPixmap Pix("../../../Logos/Logo.jpg");

    if (Pix.isNull())
    {
        qWarning() << "Failed to load the image"; // Log a warning if the image fails to load
    }
    else
    {
        qDebug() << "Image loaded successfully"; // Log success if the image loads correctly
    }

    int w = ui->label_3->width(); // Get the width of label_2
    int h = ui->label_3->height(); // Get the height of label_2
    ui->label_3->setPixmap(Pix.scaled(w, h, Qt::KeepAspectRatio)); // Scale and set the image to label_3

    ui->tabWidget->setTabEnabled(0,true);
    ui->tabWidget->setTabEnabled(1,false);
    ui->tabWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete userPtr;
}

void MainWindow::on_LoginButton_clicked()
{
    QString userName = ui->UserName->text();

    user = userName;
    User* existingUser = BackupManager::getInstance().findUserByName(user);
    if (existingUser)
    {
        showMessageBox("Welcome back", "Hello " + user + ".", QMessageBox::Information, QMessageBox::Ok);
        userPtr = existingUser;
    }
    else
    {
        showMessageBox("Welcome", "Hello " + user + ".", QMessageBox::Information, QMessageBox::Ok);
        userPtr = new User(user);
    }
    ui->tabWidget->setTabEnabled(0,false);
    ui->tabWidget->setTabEnabled(1,true);
    ui->tabWidget->setCurrentIndex(1);
}


void MainWindow::on_StartButton_clicked()
{
    QString Emotion = ui->EmotionBox->currentText();


    emotion = userPtr->getUserEmotion(Emotion);

    // Check if the user is worthy
    if (!userPtr->isWorthy())
    {
        qDebug() << "User " << userPtr->getUserName() << " is not worthy." << Qt::endl;
        showMessageBox("User Not Worthy", "This User can\'t generate quotes anymore", QMessageBox::Warning, QMessageBox::Ok);
        return;
    }
    else
    {
        qDebug() << "User " << userPtr->getUserName() << " is worthy." << Qt::endl;
    }
    quote = Client(userPtr, emotion);
    if(quote->getCounterEmotion() == UserEmotion::HAPPY)
    {
        Emotion = "Happy";
    }
    else if(quote->getCounterEmotion() == UserEmotion::SAD)
    {
        Emotion = "Sad";
    }
    else if(quote->getCounterEmotion() == UserEmotion::ANGRY)
    {
        Emotion = "Angry";
    }
    else if(quote->getCounterEmotion() == UserEmotion::NEUTRAL)
    {
        Emotion = "Neutral";
    }
    else
    {
        Emotion = "No Emotion";
    }
    if(quote->getContent().isEmpty())
    {
        showMessageBox("Failed to generate quote", "Couldn\'t generate quote for the given emotion", QMessageBox::Warning, QMessageBox::Ok);
    }
    else
    {
        showMessageBox("Quote generated", "Quote: " + quote->getContent(), QMessageBox::Information, QMessageBox::Ok);
        ui->Output->addItem("Counter Emotion: " + Emotion);
        ui->Output->addItem("Quote: " + quote->getContent());
    }

}

void MainWindow::on_Store_clicked()
{
    Memento memento = quote->saveStateToMemento();
    if(quote->getContent().isEmpty())
    {
        showMessageBox("Quote not stored", "No quote to store", QMessageBox::Warning, QMessageBox::Ok);
    }
    else
    {
        BackupManager::getInstance().saveState(memento);
        showMessageBox("Quote stored", "Stored current quote", QMessageBox::Information, QMessageBox::Ok);
        ui->Output->addItem("Stored current quote");
    }

}


void MainWindow::on_Restore_clicked()
{
    int index = ui->Index->text().toInt();

    if(index >= 1)
    {
        index -= 1;
    }

    Memento memento = BackupManager::getInstance().restoreState(index);
    if(memento.getContent().isEmpty())
    {
        showMessageBox("Restoring Failed", "No quote at index: " + QString::number(index+1), QMessageBox::Warning, QMessageBox::Ok);
        ui->Output->addItem("No quote at index: " + QString::number(index+1));
    }
    else
    {
        showMessageBox("Quote restored", "Restored quote with index: " + QString::number(index+1) + "\nQuote: " + memento.getContent(), QMessageBox::Information, QMessageBox::Ok);
        ui->Output->addItem("Restored quote with index: " + QString::number(index+1));
        ui->Output->addItem("Emotion: " + memento.getEmotion());
        ui->Output->addItem("Quote: " + memento.getContent());
    }

}

void MainWindow::on_Clear_clicked()
{
    ui->Output->clear();
}


void MainWindow::on_Exit_2_clicked()
{
    BackupManager::getInstance().addUser(*userPtr);

    ui->Index->clear();
    ui->Output->clear();

    ui->tabWidget->setTabEnabled(0,true);
    ui->tabWidget->setTabEnabled(1,false);
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::showMessageBox(QString title, QString text, QMessageBox::Icon icon, QMessageBox::StandardButton button)
{
    msgBox->setWindowTitle(title);        // Set the title of the message box
    msgBox->setText(text);                // Set the text of the message box
    msgBox->setIcon(icon);                // Set the icon of the message box
    msgBox->setStandardButtons(button);  // Set the standard buttons of the message box
    msgBox->adjustSize();                 // Adjust the size of the message box
    msgBox->exec();                       // Show the message box
}

