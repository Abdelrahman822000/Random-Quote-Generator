#ifndef QUOTEDATABASE_HPP
#define QUOTEDATABASE_HPP

#include <Quote.hpp>
#include <Includes.hpp>

// Quote Database Singleton
class QuoteDatabase
{
    private:
        QuoteDatabase();             // Private constructor to prevent instantiation
        QVector<Quote *> quotes; // Storage for quotes

    public:
    // Deleting copy constructor and assignment operator
        QuoteDatabase &operator=(const QuoteDatabase &obj) = delete;
        QuoteDatabase(const QuoteDatabase &obj) = delete;

        static QuoteDatabase &getInstance(); // Get Instance of QuoteDatabase
        void addQuote(const QString &content, UserEmotion counterEmotion); // Add new quote to the database
        QVector<Quote *> getQuotes() const; // Retrieve all quotes
        bool loadQuotesFromFile(const QString &filename); // Load quotes from the file named filename
};

#endif
