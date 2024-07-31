#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <UserEmotion.hpp>
#include <Memento.hpp>
#include <Quote.hpp>
#include <HappyQuoteAgent.hpp>
#include <SadQuoteAgent.hpp>
#include <AngryQuoteAgent.hpp>
#include <NeutralQuoteAgent.hpp>
#include <QuoteDatabase.hpp>
#include <BackupManager.hpp>
#include <User.hpp>
#include <QuoteController.hpp>

// Function declarations
Quote *Client(User* user, UserEmotion userEmotion);

#endif
