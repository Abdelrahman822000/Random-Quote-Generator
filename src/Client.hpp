#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <src\UserEmotion.hpp>
#include <src\Memento.hpp>
#include <src\Quote.hpp>
#include <src\HappyQuoteAgent.hpp>
#include <src\SadQuoteAgent.hpp>
#include <src\AngryQuoteAgent.hpp>
#include <src\NeutralQuoteAgent.hpp>
#include <src\QuoteDatabase.hpp>
#include <src\BackupManager.hpp>
#include <src\User.hpp>
#include <src\QuoteController.hpp>

// Function declarations
Quote *Client(User* user, UserEmotion userEmotion);

#endif
