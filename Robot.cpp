#include "Robot.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
bool Robot::beats(Move* other) {
    if (dynamic_cast<Monkey*>(other)) return true;   // R beats M
    if (dynamic_cast<Pirate*>(other)) return false;  // P BEATS R
    if (dynamic_cast<Ninja*>(other)) return true;   // R BEATS N
    if (dynamic_cast<Zombie*>(other)) return true;   // R BEATSZ
    return false;  
}
