#include "QuoteDatabase.hpp"

// Constructor for QuoteDatabase
QuoteDatabase::QuoteDatabase() {}

// Method to get the singleton instance of QuoteDatabase
QuoteDatabase &QuoteDatabase::getInstance()
{
    static QuoteDatabase instance; // Create a static instance of QuoteDatabase
    return instance;
}

// Method to add a quote to the database
void QuoteDatabase::addQuote(const QString &content, UserEmotion counterEmotion)
{
    Quote *quote = new Quote(content, counterEmotion); // Create a new quote using QuoteFactory
    quotes.push_back(quote); // Add the new quote to the list of quotes
}

// Method to retrieve all quotes from the database
QVector<Quote *> QuoteDatabase::getQuotes() const
{
    return quotes; // Return the list of quotes
}

// Method to load quotes from a file
bool QuoteDatabase::loadQuotesFromFile(const QString &filename)
{
    QFile file(filename); // Open the file
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qCritical() << "Failed to open file: " << filename; // Error handling if the file cannot be opened
        return false;
    }

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        int pos = line.indexOf(':'); // Find the position of the delimiter
        if (pos != -1)
        {
            bool ok;
            int emotion = line.left(pos).toInt(&ok); /* Extract the emotion part and convert to integer */
            if (!ok)
            {
                qCritical() << "Failed to convert emotion to integer: " << line.left(pos);
                continue;
            }
            UserEmotion counterEmotion = static_cast<UserEmotion>(emotion); // Convert integer to UserEmotion enum
            QString content = line.mid(pos + 1); // Extract the quote content
            addQuote(content, counterEmotion); // Add the quote to the database
        }
    }

    file.close(); // Close the file
    return true; // Indicate that quotes were loaded successfully
}

