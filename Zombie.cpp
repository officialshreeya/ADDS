#include "Zombie.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
bool Zombie::beats(Move* other) {
    if (dynamic_cast<Monkey*>(other)) return false;  // Zombie loses to Monkey
    if (dynamic_cast<Robot*>(other)) return false;   // Robot beats Zombie
    if (dynamic_cast<Pirate*>(other)) return true;   // Zombie beats Pirate
    if (dynamic_cast<Ninja*>(other)) return true;    // Zombie beats Ninja (Corrected)
    return false;
}
