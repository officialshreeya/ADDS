#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Rock.h"  
using namespace std;

int main() {
    srand(time(nullptr));  

    
    string playerName;
    cin >> playerName;

    Human humanPlayer(playerName);
    Computer computerPlayer(new Rock()); 
    Referee referee;

    
    Player* winner = referee.refGame(&humanPlayer, &computerPlayer);
    
    if (winner) {
        cout << winner->getName() << " Wins!" << endl;
    } else {
        cout << "It's a Tie!" << endl;
    }

    return 0;
}
