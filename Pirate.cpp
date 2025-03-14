#include "Pirate.h"
#include "Monkey.h"
#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"
bool Pirate::beats(Move* other) {
    if (dynamic_cast<Monkey*>(other)) return true;   // Pirate should beat Monkey
    if (dynamic_cast<Robot*>(other)) return true;    // Pirate beats Robot
    if (dynamic_cast<Ninja*>(other)) return true;    // Pirate beats Ninja
    if (dynamic_cast<Zombie*>(other)) return false;  // Zombie beats Pirate
    return false;
}
