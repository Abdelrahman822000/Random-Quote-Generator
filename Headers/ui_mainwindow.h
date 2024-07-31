/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *Login;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *UserName;
    QPushButton *LoginButton;
    QLabel *label_3;
    QWidget *NewQuote;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QComboBox *EmotionBox;
    QPushButton *StartButton;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QListWidget *Output;
    QPushButton *Clear;
    QPushButton *Exit_2;
    QGroupBox *groupBox_10;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Store;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Index;
    QPushButton *Restore;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(907, 734);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 0, 891, 681));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 30, 867, 641));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(10);
        font.setBold(true);
        tabWidget->setFont(font);
        tabWidget->setAutoFillBackground(false);
        Login = new QWidget();
        Login->setObjectName("Login");
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 150, 771, 92));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        UserName = new QLineEdit(layoutWidget);
        UserName->setObjectName("UserName");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(15);
        font2.setBold(false);
        UserName->setFont(font2);

        horizontalLayout->addWidget(UserName);


        verticalLayout->addLayout(horizontalLayout);

        LoginButton = new QPushButton(layoutWidget);
        LoginButton->setObjectName("LoginButton");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(20);
        font3.setBold(true);
        LoginButton->setFont(font3);
        LoginButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(LoginButton);

        label_3 = new QLabel(Login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 290, 511, 281));
        tabWidget->addTab(Login, QString());
        NewQuote = new QWidget();
        NewQuote->setObjectName("NewQuote");
        groupBox_6 = new QGroupBox(NewQuote);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(160, 20, 551, 161));
        layoutWidget1 = new QWidget(groupBox_6);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(46, 50, 461, 66));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        horizontalLayout_5->addWidget(label_10);

        EmotionBox = new QComboBox(layoutWidget1);
        EmotionBox->addItem(QString());
        EmotionBox->addItem(QString());
        EmotionBox->addItem(QString());
        EmotionBox->addItem(QString());
        EmotionBox->setObjectName("EmotionBox");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        EmotionBox->setFont(font4);
        EmotionBox->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(EmotionBox);


        verticalLayout_3->addLayout(horizontalLayout_5);

        StartButton = new QPushButton(layoutWidget1);
        StartButton->setObjectName("StartButton");
        StartButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(StartButton);

        groupBox_7 = new QGroupBox(NewQuote);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setGeometry(QRect(160, 320, 551, 241));
        layoutWidget2 = new QWidget(groupBox_7);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(40, 40, 471, 181));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Output = new QListWidget(layoutWidget2);
        Output->setObjectName("Output");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Times New Roman")});
        font5.setPointSize(10);
        font5.setBold(false);
        Output->setFont(font5);

        verticalLayout_4->addWidget(Output);

        Clear = new QPushButton(layoutWidget2);
        Clear->setObjectName("Clear");
        Clear->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(Clear);

        Exit_2 = new QPushButton(NewQuote);
        Exit_2->setObjectName("Exit_2");
        Exit_2->setGeometry(QRect(290, 570, 291, 29));
        Exit_2->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_10 = new QGroupBox(NewQuote);
        groupBox_10->setObjectName("groupBox_10");
        groupBox_10->setGeometry(QRect(160, 190, 551, 121));
        layoutWidget3 = new QWidget(groupBox_10);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(20, 27, 521, 81));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Store = new QPushButton(layoutWidget3);
        Store->setObjectName("Store");
        Store->setFont(font);
        Store->setCursor(QCursor(Qt::PointingHandCursor));
        Store->setAutoFillBackground(false);

        horizontalLayout_3->addWidget(Store);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName("label_2");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Times New Roman")});
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setUnderline(false);
        font6.setStrikeOut(false);
        label_2->setFont(font6);

        horizontalLayout_2->addWidget(label_2);

        Index = new QLineEdit(layoutWidget3);
        Index->setObjectName("Index");
        Index->setFont(font5);

        horizontalLayout_2->addWidget(Index);


        verticalLayout_2->addLayout(horizontalLayout_2);

        Restore = new QPushButton(layoutWidget3);
        Restore->setObjectName("Restore");
        Restore->setFont(font);
        Restore->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(Restore);


        horizontalLayout_3->addLayout(verticalLayout_2);

        tabWidget->addTab(NewQuote, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 907, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "User Name  :-", nullptr));
        UserName->setText(QString());
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Login), QCoreApplication::translate("MainWindow", "Login", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Create New Quote", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Choose Emotion :-", nullptr));
        EmotionBox->setItemText(0, QCoreApplication::translate("MainWindow", "Happy", nullptr));
        EmotionBox->setItemText(1, QCoreApplication::translate("MainWindow", "Sad", nullptr));
        EmotionBox->setItemText(2, QCoreApplication::translate("MainWindow", "Angry", nullptr));
        EmotionBox->setItemText(3, QCoreApplication::translate("MainWindow", "Neutral", nullptr));

        StartButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Output", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Exit_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "Store or Restore Quote", nullptr));
        Store->setText(QCoreApplication::translate("MainWindow", "Store Data", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Index :-", nullptr));
        Index->setText(QString());
        Restore->setText(QCoreApplication::translate("MainWindow", "Restore Data", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(NewQuote), QCoreApplication::translate("MainWindow", "New Quote", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
