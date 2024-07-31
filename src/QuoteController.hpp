#ifndef QUOTECONTROLLER_HPP
#define QUOTECONTROLLER_HPP

#include <src\Includes.hpp>
#include <src\QuoteAgent.hpp>

// QuoteController Class to manage the Quote handling process
class QuoteController
{
    private:
        QVector<QuoteAgent*> agents; // List of quote agents
        QuoteController(); // Private constructor for singleton pattern

    public:
        // Deleting copy constructor and assignment operator to prevent copying
        QuoteController &operator=(const QuoteController &obj) = delete;
        QuoteController(const QuoteController &obj) = delete;

        // Static method to get the singleton instance of QuoteController
        static QuoteController &getInstance();

        // Method to add a QuoteAgent to the controller
        void addQuoteAgent(QuoteAgent *agent);

        // Method to distribute quotes to all registered agents
        void setQuotesToAgents(QVector<Quote *> quotes);

        // Method to request a quote based on user's emotion
        Quote *requestQuote(UserEmotion emotion);
};

#endif
