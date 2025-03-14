#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    
    if (move1->getName() == move2->getName()) {  
        delete move1;
        delete move2;

        
        if (player1->getName() == "Computer" && player2->getName() == "Computer") {
            return player2;  
        }

        return player1;  
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
