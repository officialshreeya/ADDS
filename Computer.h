#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <memory>
class Computer : public Player {
public:
    Computer() {}
    Move* makeMove() override;
    std::string getName() override;
};
#endif
