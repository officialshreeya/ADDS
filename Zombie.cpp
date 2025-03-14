#include "Zombie.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
bool Zombie::beats(Move* other) {
    if (dynamic_cast<Monkey*>(other)) return false;  // M BEATS Z
    if (dynamic_cast<Robot*>(other)) return false;   // R BEATS Z
    if (dynamic_cast<Pirate*>(other)) return true;   // Z BEATS P
    if (dynamic_cast<Ninja*>(other)) return true;    // Z BEATS N 
    return false;
}
