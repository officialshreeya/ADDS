#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include "Move.h"
#include <string>

class Computer : public Player {
private:
    Move* fixedMove;  
public:
    Computer();  
    Computer(Move* move);  
    Move* makeMove() override;
    std::string getName() override;
};

#endif
