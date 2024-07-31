#include "QuoteFactory.hpp"

QuoteFactory::QuoteFactory() {} // Private constructor

// Singleton instance of QuoteFactory
QuoteFactory &QuoteFactory::getInstance()
{
    static QuoteFactory instance;
    return instance;
}

// Implementing function from the abstract class
Quote *QuoteFactory::newQuote(const QString &content, UserEmotion counterEmotion)
{
    // Create and returning a new Quote object
    return new Quote(content, counterEmotion);
}
