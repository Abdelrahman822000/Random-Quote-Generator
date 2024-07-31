#include "Headers\Quote.hpp"

// Private constructor
Quote::Quote(const QString &Content, UserEmotion CounterEmotion)
    : content(Content), counterEmotion(CounterEmotion) {}

// Implementing functions from the abstract class

// Getter to get Content
QString Quote::getContent() const
{
    return content;
}

// Getter to get Counter Emotion
UserEmotion Quote::getCounterEmotion() const
{
    return counterEmotion;
}

// Save the current state to a Memento object
Memento Quote::saveStateToMemento() const
{
    return Memento(content, counterEmotion);
}

// Restore state from a Memento object
void Quote::getStateFromMemento(const Memento &memento)
{
    content = memento.getContent();
    QString emotion = memento.getEmotion();
    // Convert emotion string to UserEmotion enum
    if (emotion == "Happy")
    {
        counterEmotion = UserEmotion::HAPPY;
    }
    else if (emotion == "Sad")
    {
        counterEmotion = UserEmotion::SAD;
    }
    else if (emotion == "Angry")
    {
        counterEmotion = UserEmotion::ANGRY;
    }
    else if (emotion == "Neutral")
    {
        counterEmotion = UserEmotion::NEUTRAL;
    }
    else
    {
        counterEmotion = UserEmotion::NOEMOTION;
    }
}
