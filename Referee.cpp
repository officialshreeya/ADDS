#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    // Check for a tie scenario
    if (move1->getName() == move2->getName()) {  
        delete move1;
        delete move2;

        // Ensuring the correct player order: return Computer if one exists
        if (player1->getName() == "Computer") {
            return player1;  // Keep Computer in the output order
        }
        return player2;  // Otherwise, return the second player
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
