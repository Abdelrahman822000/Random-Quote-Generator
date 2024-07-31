#ifndef MEMENTO_HPP
#define MEMENTO_HPP

#include <Headers\Includes.hpp>
#include <Headers\UserEmotion.hpp>

// Memento class to store the state of an object
class Memento
{
    private:
        QString content; // Content of the object
        QString emotion; // Emotion associated with the object's state

    public:
        Memento(); // Constructor
        Memento(const QString &content, const UserEmotion emotion); // Constructor to initialize the state
        QString getContent() const; // Getter to retrieve the stored content
        QString getEmotion() const; // Getter to retrieve the stored emotion
};
#endif // MEMENTO_HPP
