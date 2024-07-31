#include "SadQuoteAgent.hpp"
#include <random>
#include <stdexcept>

// Implementing functions from the abstract class
void SadQuoteAgent::setQuotes(QVector<Quote *> quotes)
{
    // Set quotes that match the target emotion
    UserEmotion targetEmotion = UserEmotion::HAPPY;
    for (auto &quote : quotes)
    {
        if (quote->getCounterEmotion() == targetEmotion)
        {
            this->quotes.push_back(quote);
        }
    }
}

Quote *SadQuoteAgent::handleRequest(UserEmotion userEmotion)
{
    if (userEmotion == UserEmotion::SAD)
    {
        // Handle request for sad emotion
        if (quotes.empty())
        {
            throw std::runtime_error("No compatible quotes found");
        }
        QRandomGenerator* generator = QRandomGenerator::global();
        int index = generator->bounded(quotes.size());
        return quotes[index];
    }
    else
    {
        // Pass the request to the next quote agent
        if (nextQuoteAgent)
        {
            return nextQuoteAgent->handleRequest(userEmotion);
        }
        else
        {
            return nullptr;
        }
    }
}

// Override setNextQuoteAgent to set the next agent in the chain
void SadQuoteAgent::setNextQuoteAgent(QuoteAgent *nextAgent)
{
    this->nextQuoteAgent = nextAgent;
}

// Destructor to clean up quotes
SadQuoteAgent::~SadQuoteAgent()
{
    for (auto &quote : quotes)
    {
        delete quote;
    }
    quotes.clear();
    delete this;
}
