#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    Player* winner = nullptr;  // Store winner before deleting moves

    if (move1->beats(move2)) {
        winner = player1;
    } else if (move2->beats(move1)) {
        winner = player2;
    }

    delete move1;  // Now safe to delete
    delete move2;  

    return winner;  // Return winner after cleanup
}