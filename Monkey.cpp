#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
bool Monkey::beats(Move* other) {
    if (dynamic_cast<Robot*>(other)) return false;  // Robot beats Monkey
    if (dynamic_cast<Pirate*>(other)) return true;   // Monkey beats Pirate
    if (dynamic_cast<Ninja*>(other)) return false;  // Ninja beats Monkey
    if (dynamic_cast<Zombie*>(other)) return true;  // Monkey beats Zombie
    return false;
}