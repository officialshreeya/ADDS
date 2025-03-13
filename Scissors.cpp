#include "Scissors.h"
#include "Paper.h"
#include "Rock.h"

bool Scissors::beats(Move* other) {
    if (dynamic_cast<Paper*>(other)) return true;   // Scissors cut Paper
    if (dynamic_cast<Rock*>(other)) return false;   // Rock beats Scissors
    return false;
}
