#include "src\Memento.hpp"

// Constructor to initialize the Memento with content and emotion
Memento::Memento()
{

}

Memento::Memento(const QString &content, const UserEmotion emotion) : content(content)
{
    // Convert the UserEmotion enum to string representation
    if (emotion == UserEmotion::HAPPY)
    {
        this->emotion = "Happy";
    }
    else if (emotion == UserEmotion::SAD)
    {
        this->emotion = "Sad";
    }
    else if (emotion == UserEmotion::ANGRY)
    {
        this->emotion = "Angry";
    }
    else if (emotion == UserEmotion::NEUTRAL)
    {
        this->emotion = "Neutral";
    }
    else
    {
        this->emotion = "No Emotion";
    }
}

// Getter to retrieve the stored content of the Memento
QString Memento::getContent() const
{
    return content;
}

// Getter to retrieve the stored emotion of the Memento
QString Memento::getEmotion() const
{
    return emotion;
}
