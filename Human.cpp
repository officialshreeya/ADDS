#include "Human.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
using namespace std;
Human::Human(string playerName): name(playerName) {}
Move* Human::makeMove() {
    string move;
    cin >> move; //will return R if invalid
    if (move == "Monkey") return new Monkey();
    if (move == "Robot") return new Robot();
    if (move == "Pirate") return new Pirate();
    if (move == "Ninja") return new Ninja();
    if (move == "Zombie") return new Zombie();
    return new Monkey();
}
string Human::getName() {
    return name;
}
