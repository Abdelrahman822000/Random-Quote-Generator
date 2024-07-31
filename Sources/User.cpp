#include "Headers\User.hpp"

// Default Constructor
User::User() {}

// Parameterized Constructor
User::User(const QString &name) : name(name), count(0) {}

UserEmotion User::getUserEmotion(QString choice)
{
    if (choice == "1" || choice == "Happy")
    {
        emotion = UserEmotion::HAPPY;
    }
    else if (choice == "2" || choice == "Sad")
    {
        emotion = UserEmotion::SAD;
    }
    else if (choice == "3" || choice == "Angry")
    {
        emotion = UserEmotion::ANGRY;
    }
    else if (choice == "4" || choice == "Neutral")
    {
        emotion = UserEmotion::NEUTRAL;
    }
    else
    {
        qCritical() << "Invalid choice. Defaulting to No emotion.\n";
        emotion = UserEmotion::NOEMOTION;
    }
    return emotion;
}

QString User::getUserName()
{
    return name;
}

bool User::isWorthy()
{
    // Determine if the user is worthy of receiving a quote
    if (emotion == UserEmotion::NOEMOTION)
    {
        return false;
    }
    else
    {
        if (count >= 6)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

void User::increaseCount()
{
    count++;
}
