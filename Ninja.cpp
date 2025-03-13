#include "Ninja.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Zombie.h"
bool Ninja::beats(Move* other) {
    if (dynamic_cast<Monkey*>(other)) return true;   // Ninja beats Monkey
    if (dynamic_cast<Robot*>(other)) return false;   // Robot beats Ninja
    if (dynamic_cast<Pirate*>(other)) return false;  // Ninja loses to Pirate
    if (dynamic_cast<Zombie*>(other)) return true;   // Ninja beats Zombie
    return false;
}
