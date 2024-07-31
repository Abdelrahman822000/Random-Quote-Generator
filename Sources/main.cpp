#include "Headers\mainwindow.h"

#include <QApplication>
#include <Headers\Client.hpp>
#include <Headers\Includes.hpp>
#include <Headers\Include_Classes.hpp>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QuoteDatabase::getInstance().loadQuotesFromFile("../../../Quotes/quotes.txt");

    // Style sheet downloaded from QSS stock (https://qss-stock.devsecstudio.com/)
    QFile styleSheetFile("../../../Style/Darkeum.qss"); // Define a QFile object to read the stylesheet file

    if (!styleSheetFile.open(QIODevice::ReadOnly)) // Check if the stylesheet file can be opened
    {
        qWarning() << "Couldn't open Style file."; // Output a warning message if the file couldn't be opened

    }
    QString styleSheet = QLatin1String(styleSheetFile.readAll()); // Read the contents of the stylesheet file into a QString

    a.setStyleSheet(styleSheet); // Set the application's stylesheet using the read stylesheet

    MainWindow w; // Create an instance of the MainWindow class

    w.setWindowTitle("Quote Generator"); // Set the window title

    QString iconPath = "../../../icon/QuoteGenerator.ico";
    QIcon icon(iconPath); // Define a QIcon object with the path to the icon file

    w.setWindowIcon(icon); // Set the window icon
    w.show();
    return a.exec();
}
