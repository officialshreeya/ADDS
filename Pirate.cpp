#include "Pirate.h"
#include "Monkey.h"
#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"
bool Pirate::beats(Move* other) {
    if (dynamic_cast<Monkey*>(other)) return true;   // P BEAT M
    if (dynamic_cast<Robot*>(other)) return true;    // P BEAT R
    if (dynamic_cast<Ninja*>(other)) return true;    // P BEAT N
    if (dynamic_cast<Zombie*>(other)) return false;  // Z BEAT P
    return false;
}
