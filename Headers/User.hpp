#ifndef USER_HPP
#define USER_HPP

#include <Headers\Includes.hpp>
#include <Headers\UserEmotion.hpp>

// User Interface Class
class User
{
    private:
        QString name;    // User's name
        UserEmotion emotion; // User's current emotion
        qint32 count;           // Number of requests made by the user

    public:
        // Default Constructor
        User();
        // Parameterized Constructor
        User(const QString &name);

        UserEmotion getUserEmotion(QString choice); // Getter to get User emotion
        QString getUserName() const;  // Getter to get User name
        bool isWorthy();              // Determine if User is worthy or not
        void increaseCount();         // Increase count
        qint32 getCount() const;
};

#endif
