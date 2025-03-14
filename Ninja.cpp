#include "Ninja.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Zombie.h"
bool Ninja::beats(Move* other) {
    if (dynamic_cast<Monkey*>(other)) return true;   //N  BEATS M
    if (dynamic_cast<Robot*>(other)) return false;   // R BEATS N
    if (dynamic_cast<Pirate*>(other)) return false;  // P BEATS N
    if (dynamic_cast<Zombie*>(other)) return true;   // N BEATS Z
    return false;
}
