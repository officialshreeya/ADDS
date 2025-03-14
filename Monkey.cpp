#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
bool Monkey::beats(Move* other) {
    if (dynamic_cast<Robot*>(other)) return false;  // R BEATS M
    if (dynamic_cast<Pirate*>(other)) return true;   // M BEATS P
    if (dynamic_cast<Ninja*>(other)) return false;  // N BEATS M
    if (dynamic_cast<Zombie*>(other)) return true;  // M BEATS Z
    return false;
}