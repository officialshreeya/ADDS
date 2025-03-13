#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream>
#include <memory>  // for knowleagable kind of pointers
class Human : public Player {
private:
    std::string name;
public:
    Human(std::string playerName = "Human");
    Move* makeMove() override;
    std::string getName() override;
};
#endif
