#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <Headers\UserEmotion.hpp>
#include <Headers\Memento.hpp>
#include <Headers\Quote.hpp>
#include <Headers\HappyQuoteAgent.hpp>
#include <Headers\SadQuoteAgent.hpp>
#include <Headers\AngryQuoteAgent.hpp>
#include <Headers\NeutralQuoteAgent.hpp>
#include <Headers\QuoteDatabase.hpp>
#include <Headers\BackupManager.hpp>
#include <Headers\User.hpp>
#include <Headers\QuoteController.hpp>

// Function declarations
Quote *Client(User* user, UserEmotion userEmotion);

#endif
