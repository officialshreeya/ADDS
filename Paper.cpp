#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"
//had to create paper, scissor and rock classes to ensure proper movements between different characters in the logic.
bool Paper::beats(Move* other) {
    if (dynamic_cast<Rock*>(other)) return true;   // PAP.. BEAT ROCK
    if (dynamic_cast<Scissors*>(other)) return false;  // S BEAT PAP..
    return false;
}
