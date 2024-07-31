#include "Operations.h"

// Function to generate random quotes
void RandomQuotegenerator()
{
    QString user1Name;
    QString user2Name;

    // Load quotes from a file into the QuoteDatabase
    QuoteDatabase::getInstance().loadQuotesFromFile("quotes.txt");

    qDebug() << "Enter First User Name: ";
    // GUI read user1Name
    qDebug() << "Enter Second User Name: ";
    // GUI read user2Name

    // Create two user objects
    User user1(user1Name);
    User user2(user2Name);

    // Start sender and receiver threads using the TxRx object
    QThread sender;
    QThread receiver;

    // Wait for both threads to finish
    sender.start();
    receiver.start();
}
