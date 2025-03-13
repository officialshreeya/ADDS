#include "Rock.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
bool Rock::beats(Move* other) {
    if (dynamic_cast<Monkey*>(other)) return false;  // Monkey beats Rock
    if (dynamic_cast<Robot*>(other)) return true;    // Rock beats Robot
    if (dynamic_cast<Pirate*>(other)) return true;   // Rock beats Pirate
    if (dynamic_cast<Ninja*>(other)) return false;   // Ninja beats Rock
    if (dynamic_cast<Zombie*>(other)) return false;  // Zombie beats Rock
    return false;
}
