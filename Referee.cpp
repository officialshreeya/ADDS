#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    // Handle tie scenario
    if (move1->getName() == move2->getName()) {  
        delete move1;
        delete move2;
        return nullptr;  // Return nullptr for a tie
    }

    Player* winner = nullptr;
    if (move1->beats(move2)) {
        winner = player1;
    } else {
        winner = player2;
    }

    delete move1;
    delete move2;

    return winner;
}
