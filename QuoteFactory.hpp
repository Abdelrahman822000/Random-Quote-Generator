#ifndef QUOTEFACTORY_HPP
#define QUOTEFACTORY_HPP

#include <QuoteFactoryAbstract.hpp>
#include <Includes.hpp>

// QuoteFactory class implementing QuoteFactoryAbstract
class QuoteFactory : public QuoteFactoryAbstract
{
    private:
        QuoteFactory(); // Private constructor

    public:
        // Deleting copy constructor and assignment operator
        QuoteFactory &operator=(const QuoteFactory &obj) = delete;
        QuoteFactory(const QuoteFactory &obj) = delete;

        static QuoteFactory &getInstance(); // Singleton instance of QuoteFactory
        Quote *newQuote(const QString& content, UserEmotion counterEmotion) override;// Implementing function from the abstract class
};

#endif // QUOTEFACTORY_HPP
