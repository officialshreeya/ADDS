#include "Rock.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

bool Rock::beats(Move* other) {
    if (dynamic_cast<Monkey*>(other)) return true;  // R BEATS M
    if (dynamic_cast<Robot*>(other)) return false;  // Rob BEATS R
    if (dynamic_cast<Pirate*>(other)) return false; // P BEATS ROCK
    if (dynamic_cast<Ninja*>(other)) return true;   // Rock BEATS N
    if (dynamic_cast<Zombie*>(other)) return true;  // R BEATS Z
    return false;
}
