#include "Human.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include <iostream>  

using namespace std;

Human::Human(std::string playerName) {
    name = playerName;  
}

Move* Human::makeMove() {
    string move;
    cin >> move;

    if (move == "Rock") return new Rock();
    if (move == "Paper") return new Paper();
    if (move == "Scissors") return new Scissors();
    if (move == "Monkey") return new Monkey();
    if (move == "Robot") return new Robot();
    if (move == "Pirate") return new Pirate();
    if (move == "Ninja") return new Ninja();
    if (move == "Zombie") return new Zombie();

    std::cout << "Invalid move" << std::endl;
    return nullptr;  
}

string Human::getName() {
    return name;
}
