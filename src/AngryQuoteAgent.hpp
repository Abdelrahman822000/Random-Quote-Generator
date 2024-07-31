#ifndef ANGRYQUOTEAGENT_HPP
#define ANGRYQUOTEAGENT_HPP

#include <src\QuoteAgent.hpp>
#include <src\Includes.hpp>

// AngryQuoteAgent class implementing QuoteAgent
class AngryQuoteAgent : public QuoteAgent
{
    private:
        QVector<Quote *> quotes; // List of quotes
        QuoteAgent* nextQuoteAgent;  // Pointer to the next support agent in the chain
    public:
        // Implementing functions from the abstract class
        void setQuotes(QVector<Quote *> quotes) override;
        Quote *handleRequest(UserEmotion userEmotion) override;

        // Override setNextQuoteAgent to set the next agent in the chain
        virtual void setNextQuoteAgent(QuoteAgent *nextAgent) override;

        // Destructor to clean up quotes
        ~AngryQuoteAgent() override;
};

#endif // ANGRYQUOTEAGENT_HPP
