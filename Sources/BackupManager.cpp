#include "Headers\BackupManager.hpp"
// Private constructor to prevent instantiation
BackupManager::BackupManager() {}

BackupManager &BackupManager::getInstance()
{
    static BackupManager instance; // Get Instance of QuoteDatabase
    return instance;
}

// Method to save a Memento object
void BackupManager::saveState(const Memento &memento)
{
    mementos.append(memento);
}

// Method to restore a Memento object by index
Memento BackupManager::restoreState(qsizetype index)
{
    if (index >= 0 && index < mementos.size())
    {
        return mementos[index];
    }
    else if (index >= mementos.size())
    {
        qCritical() << "Index out of range" << Qt::endl;
        return Memento("", UserEmotion::NOEMOTION); // Default state if index is out of range
    }
    else
    {
        qCritical() << "No states to restore!" << Qt::endl;
        return Memento("", UserEmotion::NOEMOTION); // Default state if no mementos are available
    }
}

void BackupManager::addUser(const User &user)
{
    users.append(user);
}

User *BackupManager::findUserByName(const QString &username)
{
    for (User& user : users)
    {
        if (user.getUserName() == username)
        {
            return &user;
        }
    }
    return nullptr;
}
