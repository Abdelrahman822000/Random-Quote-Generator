#include "Headers\NeutralQuoteAgent.hpp"

// Implementing functions from the abstract class
void NeutralQuoteAgent::setQuotes(QVector<Quote *> quotes)
{
    // Set quotes that match the target emotion
    UserEmotion targetEmotion = UserEmotion::ANGRY;

    for (auto &quote : quotes)
    {
        if (quote->getCounterEmotion() == targetEmotion)
        {
            this->quotes.push_back(quote); // Add quote to the list if it matches
        }
    }
}

Quote *NeutralQuoteAgent::handleRequest(UserEmotion userEmotion)
{
    if (userEmotion == UserEmotion::NEUTRAL)
    {
        // If the user's emotion is Neutral, this agent will handle the request
        if (quotes.empty())
        {
            throw std::runtime_error("No compatible quotes found"); // Error if no quotes available
        }

        // Select a random quote from the list
        QRandomGenerator* generator = QRandomGenerator::global();
        int index = generator->bounded(quotes.size());
        return quotes[index];
    }
    else
    {
        // If the user's emotion is not Neutral, return null pointer because Neutral Quote Agent is the highest agent
        return nullptr;
    }
}

// Override setNextQuoteAgent to set the next agent in the chain
void NeutralQuoteAgent::setNextQuoteAgent(QuoteAgent *nextAgent)
{
    this->nextQuoteAgent = nextAgent;
}

NeutralQuoteAgent::~NeutralQuoteAgent()
{
    for (auto &quote : quotes)
    {
        delete quote; // Clean up allocated quotes
    }
    quotes.clear();
    delete this;
}
