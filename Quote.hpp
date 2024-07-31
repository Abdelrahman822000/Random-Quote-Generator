#ifndef QUOTE_HPP
#define QUOTE_HPP

#include <Includes.hpp>
#include <QuoteAbstract.hpp>

// Quote class implementing QuoteAbstract
class Quote : public QuoteAbstract
{
    private:
        QString content;        // Content of the quote
        UserEmotion counterEmotion; // Emotion associated with the quote

    public:
        Quote(const QString &Content, UserEmotion CounterEmotion); // Constructor

        // Implementing functions from the abstract class
        QString getContent() const override; // Getter to get Content
        UserEmotion getCounterEmotion() const override; // Getter to get Counter Emotion
        Memento saveStateToMemento() const override; // Save the current state to a Memento object
        void getStateFromMemento(const Memento &memento) override; // Restore state from a Memento object
};

#endif // QUOTE_HPP
