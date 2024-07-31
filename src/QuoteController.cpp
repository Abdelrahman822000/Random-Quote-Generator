#include "src\QuoteController.hpp"

// Constructor for QuoteController
QuoteController::QuoteController() {}

// Static method to get the singleton instance of QuoteController
QuoteController &QuoteController::getInstance()
{
    static QuoteController instance; // Singleton instance
    return instance;
}

// Method to add a QuoteAgent to the controller
void QuoteController::addQuoteAgent(QuoteAgent *agent)
{
    // If there are already agents in the list, set the next agent in the chain
    if (!agents.empty())
    {
        agents.back()->setNextQuoteAgent(agent); // Set the next agent in the chain
    }
    agents.push_back(agent); // Add the agent to the list of agents
}

// Method to distribute quotes to all registered agents
void QuoteController::setQuotesToAgents(QVector<Quote *> quotes)
{
    // Iterate through each agent and set the quotes
    for (auto &agent : agents)
    {
        agent->setQuotes(quotes); // Distribute quotes to agents
    }
}

// Method to request a quote based on user's emotion
Quote *QuoteController::requestQuote(UserEmotion emotion)
{
    // If there are no agents, return nullptr
    if (agents.empty())
    {
        return nullptr;
    }
    // Request a quote from the first agent in the list based on the user's emotion
    return agents.front()->handleRequest(emotion); 
}
