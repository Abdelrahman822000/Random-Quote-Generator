#include "src\Client.hpp"

// Function to get a quote based on user's emotion
Quote *Client(User* user, UserEmotion userEmotion)
{
    // Check if the user is worthy
    if (user->isWorthy())
    {
        // Increment the user's count
        user->increaseCount();

        // Instantiate quote agents for different emotions
        QuoteAgent *HappyAgent = new HappyQuoteAgent();
        QuoteAgent *SadAgent = new SadQuoteAgent();
        QuoteAgent *AngryAgent = new AngryQuoteAgent();
        QuoteAgent *NeutralAgent = new NeutralQuoteAgent();

        // Add quote agents to the QuoteController
        QuoteController::getInstance().addQuoteAgent(HappyAgent);
        QuoteController::getInstance().addQuoteAgent(SadAgent);
        QuoteController::getInstance().addQuoteAgent(AngryAgent);
        QuoteController::getInstance().addQuoteAgent(NeutralAgent);

        // Set quotes to the agents from the QuoteDatabase
        QuoteController::getInstance().setQuotesToAgents(QuoteDatabase::getInstance().getQuotes());

        // Request a quote based on the user's emotion
        auto quote = QuoteController::getInstance().requestQuote(userEmotion);

        // Check if a quote was found
        if (quote == nullptr)
        {
            // Print an error message if no quote was found for the given emotion
            qCritical() << "No quote found for the given emotion." << Qt::endl;
        }
        else
        {
            qDebug() << "Quote found" << Qt::endl;
        }

        // Return the quote
        return quote;
    }
    else
    {
        // Return nullptr if the user is not worthy
        return nullptr;
    }
}
