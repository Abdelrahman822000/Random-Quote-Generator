#ifndef QUOTEFACTORYABSTRACT_HPP
#define QUOTEFACTORYABSTRACT_HPP

#include <Quote.hpp>
#include <Includes.hpp>

// Abstract class for QuoteFactory
class QuoteFactoryAbstract
{
    public:
        // Pure virtual function
        virtual Quote *newQuote(const QString &content, UserEmotion counterEmotion) = 0;
};

#endif // QUOTEFACTORYABSTRACT_HPP
