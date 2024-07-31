#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <src\Include_Classes.hpp>
#include <QPixmap>
#include <QFile>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_LoginButton_clicked();

    void on_StartButton_clicked();

    void on_Store_clicked();

    void on_Restore_clicked();

    void on_Clear_clicked();

    void on_Exit_2_clicked();

private:
    Ui::MainWindow *ui;
    Quote *quote;
    UserEmotion emotion;
    QString user;
    User *userPtr;
    QMessageBox msgBox; // Message box for showing messages
    void showMessageBox(QString title, QString text, QMessageBox::Icon icon, QMessageBox::StandardButton button); // Utility function for showing message boxes

};
#endif // MAINWINDOW_H
