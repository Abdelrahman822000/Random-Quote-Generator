QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src\AngryQuoteAgent.cpp \
    src\BackupManager.cpp \
    src\Client.cpp \
    src\HappyQuoteAgent.cpp \
    src\Memento.cpp \
    src\NeutralQuoteAgent.cpp \
    src\Quote.cpp \
    src\QuoteController.cpp \
    src\QuoteDatabase.cpp \
    src\SadQuoteAgent.cpp \
    src\User.cpp \
    src\main.cpp \
    src\mainwindow.cpp

HEADERS += \
    src\AngryQuoteAgent.hpp \
    src\BackupManager.hpp \
    src\Client.hpp \
    src\HappyQuoteAgent.hpp \
    src\Include_Classes.hpp \
    src\Includes.hpp \
    src\Memento.hpp \
    src\NeutralQuoteAgent.hpp \
    src\Quote.hpp \
    src\QuoteAbstract.hpp \
    src\QuoteAgent.hpp \
    src\QuoteController.hpp \
    src\QuoteDatabase.hpp \
    src\SadQuoteAgent.hpp \
    src\User.hpp \
    src\UserEmotion.hpp \
    src\mainwindow.h

FORMS += \
    src\mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Quotes\quotes.txt
