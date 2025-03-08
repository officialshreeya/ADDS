#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <iostream>

class Human : public Player { //inherited frm abstract class
private:
    std::string name;
public:
    Human(std::string playerName = "Human");
    //overriding abs class.. 4 mods
    char makeMove() override;
    std::string getName() override;
};

#endif