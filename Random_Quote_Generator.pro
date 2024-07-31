QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Sources\AngryQuoteAgent.cpp \
    Sources\BackupManager.cpp \
    Sources\Client.cpp \
    Sources\HappyQuoteAgent.cpp \
    Sources\Memento.cpp \
    Sources\NeutralQuoteAgent.cpp \
    Sources\Quote.cpp \
    Sources\QuoteController.cpp \
    Sources\QuoteDatabase.cpp \
    Sources\SadQuoteAgent.cpp \
    Sources\User.cpp \
    Sources\main.cpp \
    Sources\mainwindow.cpp

HEADERS += \
    Headers\AngryQuoteAgent.hpp \
    Headers\BackupManager.hpp \
    Headers\Client.hpp \
    Headers\HappyQuoteAgent.hpp \
    Headers\Include_Classes.hpp \
    Headers\Includes.hpp \
    Headers\Memento.hpp \
    Headers\NeutralQuoteAgent.hpp \
    Headers\Quote.hpp \
    Headers\QuoteAbstract.hpp \
    Headers\QuoteAgent.hpp \
    Headers\QuoteController.hpp \
    Headers\QuoteDatabase.hpp \
    Headers\SadQuoteAgent.hpp \
    Headers\User.hpp \
    Headers\UserEmotion.hpp \
    Headers\mainwindow.h

FORMS += \
    Forms\mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Quotes\quotes.txt
