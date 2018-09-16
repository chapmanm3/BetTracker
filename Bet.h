#pragma once
#ifndef BET_H
#define BET_H

#include <string>

using namespace std;

class Bet {
    string team;
    string odds;
    string betType;
    float amtBet;
    Bet();
    Bet(string teamA, string oddsA, string betTypeA, float amtBetA);
    void addTeam(string a);
    void addOdds(string a);
    void addBetType(string a);
    void addAmtBet(float a);
};
#endif