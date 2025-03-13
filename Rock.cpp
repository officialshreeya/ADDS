#include "Rock.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

bool Rock::beats(Move* other) {
    if (dynamic_cast<Monkey*>(other)) return true;  // Rock beats Monkey
    if (dynamic_cast<Robot*>(other)) return false;  // Robot beats Rock
    if (dynamic_cast<Pirate*>(other)) return false; // Pirate beats Rock
    if (dynamic_cast<Ninja*>(other)) return true;   // Rock beats Ninja
    if (dynamic_cast<Zombie*>(other)) return true;  // Rock beats Zombie
    return false;
}
