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