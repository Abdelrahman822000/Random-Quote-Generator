#ifndef BACKUPMANAGER_HPP
#define BACKUPMANAGER_HPP

#include <Includes.hpp>
#include <Memento.hpp>

// BackupManager Singleton for managing Memento objects
class BackupManager
{
    private:
        BackupManager();           // Private constructor to prevent instantiation
        QVector<Memento> mementos; // List to store Memento objects

    public:
        // Deleting copy constructor and assignment operator
        BackupManager &operator=(const BackupManager &obj) = delete;
        BackupManager(const BackupManager &obj) = delete;

        static BackupManager &getInstance(); // Get Instance of BackupManager
        void saveState(const Memento &memento); // Method to save a Memento object
        Memento restoreState(qsizetype index); // Method to restore a Memento object by index
};

#endif
