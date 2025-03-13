#include "Human.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
#include "Rock.h"
using namespace std;

Human::Human(string playerName): name(playerName) {}
Move* Human::makeMove() {
    string move;
    cin >> move;

    if (move == "Monkey") return new Monkey();
    if (move == "Robot") return new Robot();
    if (move == "Pirate") return new Pirate();
    if (move == "Ninja") return new Ninja();
    if (move == "Zombie") return new Zombie();
    if (move == "Rock") return new Rock();  
    return new Monkey();  // Default to Monkey if the input is invalid
}

string Human::getName() {
    return name;
}
