#ifndef QUOTEABSTRACT_HPP
#define QUOTEABSTRACT_HPP

#include <Headers\Includes.hpp>
#include <Headers\UserEmotion.hpp>
#include <Headers\Memento.hpp>

// Abstract class for Quote
class QuoteAbstract
{
    public:
        // Pure virtual function to get the content of the quote
        virtual QString getContent() const = 0;

        // Pure virtual function to get the counter emotion of the quote
        virtual UserEmotion getCounterEmotion() const = 0;

        // Pure virtual function to save the state of the quote to a Memento object
        virtual Memento saveStateToMemento() const = 0;

        // Pure virtual function to restore the state of the quote from a Memento object
        virtual void getStateFromMemento(const Memento &memento) = 0;
};

#endif // QUOTEABSTRACT_HPP
