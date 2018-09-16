#include "Bet.h"
#include "Bet.cpp"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string inputData;
    float inputAmtBet;

    Bet bet;
    
    cout << "Welcome to Bet Tracker:" << endl;

    cout << "Input a team:" << endl;
    getline(cin, inputData);
    bet.addTeam(inputData);

    cout << "Input the odds: (ex. +105)" << endl;
    getline(cin, inputData);
    bet.addOdds(inputData);

    cout << "Input the bet type (Spread, Line, O/U):" << endl;
    getline(cin, inputData);
    bet.addBetType(inputData);

    cout << "Input the amount bet:" << endl;
    getline(cin, inputData);
    bet.addAmtBet(stof(inputData));

    cout << bet.print();
    return 0;
};