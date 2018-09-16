#include "Bet.h"
#include <string>
#include <iostream>

using namespace std;

Bet::Bet() {
    team = "N/A";
    odds = "N/A";
    betType = "N/A";
    amtBet = 420;
}

Bet::Bet(string teamA, string oddsA, string betTypeA, float amtBetA) {
   team = teamA;
   odds = oddsA;
   betType = betTypeA;
   amtBet = amtBetA;
}

void Bet::addTeam(string a) {
    team = a;
}

void Bet::addOdds(string a) {
    odds = a;
}

void Bet::addBetType(string a) {
    betType = a;
}

void Bet::addAmtBet(float a) {
    amtBet = a;
}

string Bet::print() {
    
    return "\t" + team + "\t" + odds + "\t" + betType + "\t" + to_string(amtBet);

}
