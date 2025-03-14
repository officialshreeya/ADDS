#include "Scissors.h"
#include "Paper.h"
#include "Rock.h"

bool Scissors::beats(Move* other) {
    if (dynamic_cast<Paper*>(other)) return true;   // S cut p
    if (dynamic_cast<Rock*>(other)) return false;   // Rock beat scissors
    return false;
}
