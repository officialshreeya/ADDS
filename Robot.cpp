#include "Robot.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
bool Robot::beats(Move* other) {
    if (dynamic_cast<Monkey*>(other)) {
        return true;   // Robot beats Monkey
    }
    if (dynamic_cast<Pirate*>(other)) {
        return false;  // Pirate beats Robot
    }
    if (dynamic_cast<Ninja*>(other)) {
        return true;   // Robot beats Ninja
    }
    if (dynamic_cast<Zombie*>(other)) {
        return true;   // Robot beats Zombie
    }
    return false;  
}
