#ifndef SADQUOTEAGENT_HPP
#define SADQUOTEAGENT_HPP

#include "src\QuoteAgent.hpp"

// SadQuoteAgent class implementing QuoteAgent
class SadQuoteAgent : public QuoteAgent
{
    private:
        QVector<Quote*> quotes; // List of quotes
        QuoteAgent* nextQuoteAgent;  // Pointer to the next support agent in the chain
    public:
        // Implementing functions from the abstract class
        void setQuotes(QVector<Quote*> quotes) override;
        Quote *handleRequest(UserEmotion userEmotion) override;

        // Override setNextQuoteAgent to set the next agent in the chain
        virtual void setNextQuoteAgent(QuoteAgent *nextAgent) override;

        // Destructor to clean up quotes
        ~SadQuoteAgent() override;
};

#endif // SADQUOTEAGENT_HPP
