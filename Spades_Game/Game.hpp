//
//  Game.hpp
//  Spades Project
//
//  Created by Joel Davidson on 2/20/18.
//  Copyright © 2018 Joel Davidson. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "Player.hpp"
#include <QObject>
#include <QDebug>


using namespace std;

class Game : public QObject {
    Q_OBJECT
public:
    Game();
    Game(int maxScore);
    void setMaxScore(int maxScore){winningScore = maxScore;}
    void deal();
    void takeTurn();
    void moveDealer();
    void setWhoseTurn(Player* _Player){TurnPtr = _Player;}
    void moveWhoseTurn();
    int getWhoseTurn();
    void getBid(int Ubid);
    string getScore();
    void bid(Player* _Player);
    void playCard(int i);
    vector<string> getCardsOnTable();
    int userTurn(int selection);
    void setUserBid(int bid);
    void tallyPoints();
    void setRoundOverTrue(){roundOver = true;}
    void setDifficulty(bool d){difficulty = d;}

private:
    bool trump, roundOver;
    int userTeamScore, computerTeamScore, userTeamBid, computerTeamBid, computerTeamTricks, userTeamTricks, computerTeamBags, userTeamBags, winningScore, difficulty;
    int Opp1Bid, Opp2Bid, TMBid;
    Deck D;
    Player User, OPP1, TM, OPP2;
    Player* DealerPtr;
    Player* TurnPtr;
    Player* WinningPtr;
    //Pointers to keep track of who played which card
    Player* first;
    Player* second;
    Player* third;
    Player* fourth;
    vector<Card*> CardsOnTable;

signals:
    void sendHand(vector<string> &s);
    void printText(string s);
    void getUserBid();
    void putOpp1Card(string s);
    void putOpp2Card(string s);
    void putTMCard(string s);
    void putPlayerCard(string s);
    void endGame(int i);
};

#endif /* Game_hpp */
