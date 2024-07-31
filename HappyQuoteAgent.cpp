#include "HappyQuoteAgent.hpp"

// Implementing functions from the abstract class
void HappyQuoteAgent::setQuotes(QVector<Quote *> quotes)
{
    // Set quotes that match the target emotion
    UserEmotion targetEmotion = UserEmotion::SAD;
    for (auto &quote : quotes)
    {
        if (quote->getCounterEmotion() == targetEmotion)
        {
            this->quotes.push_back(quote);
        }
    }
}

Quote *HappyQuoteAgent::handleRequest(UserEmotion userEmotion)
{
    if (userEmotion == UserEmotion::HAPPY)
    {
        // Handle request for happy emotion
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
void HappyQuoteAgent::setNextQuoteAgent(QuoteAgent *nextAgent)
{
    this->nextQuoteAgent = nextAgent;
}

// Destructor to clean up quotes
HappyQuoteAgent::~HappyQuoteAgent()
{
    for (auto &quote : quotes)
    {
        delete quote;
    }
    quotes.clear();
}
