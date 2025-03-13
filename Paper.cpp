#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"

bool Paper::beats(Move* other) {
    if (dynamic_cast<Rock*>(other)) return true;   // Paper beats Rock
    if (dynamic_cast<Scissors*>(other)) return false;  // Scissors cut Paper
    return false;
}
