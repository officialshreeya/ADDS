#include <iostream>
#include <cstdlib>  // For srand(), rand()
#include <ctime>    // For time()
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main() {
    srand(time(nullptr));  


    string playerName;
    cin >> playerName;

    Human humanPlayer(playerName);
    Computer computerPlayer;
    Referee referee;
    Player* winner = referee.refGame(&humanPlayer, &computerPlayer);
    
    if (winner) {
        cout << winner->getName() << " Wins!" << endl;
    } else {
        cout << "It's a Tie!" << endl;
    }

    return 0;
}
