#ifndef QUOTEAGENT_HPP
#define QUOTEAGENT_HPP

#include <src\Includes.hpp>
#include <src\Quote.hpp>

// Abstract class for QuoteAgent
class QuoteAgent
{
    public:
        // Destructor
        virtual ~QuoteAgent() = default;

        // Pure virtual function to set the list of quotes for the agent
        virtual void setQuotes(QVector<Quote *> quotes) = 0;

        // Pure virtual function to handle the quote request based on the user's emotion
        virtual Quote *handleRequest(UserEmotion emotion) = 0;

        // Pure virtual function to set the next agent in the chain of responsibility
        virtual void setNextQuoteAgent(QuoteAgent *nextAgent) = 0;
};

#endif // QUOTEAGENT_HPP
