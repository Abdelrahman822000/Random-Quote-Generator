#ifndef HAPPYQUOTEAGENT_HPP
#define HAPPYQUOTEAGENT_HPP

#include <QuoteAgent.hpp>
#include <Includes.hpp>

// HappyQuoteAgent class implementing QuoteAgent
class HappyQuoteAgent : public QuoteAgent
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
        ~HappyQuoteAgent() override;
};

#endif // HAPPYQUOTEAGENT_HPP
