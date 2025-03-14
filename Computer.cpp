#include "Computer.h"
#include "Rock.h"

Computer::Computer() { //computer should alway output rock
    fixedMove = new Rock();  
}

Computer::Computer(Move* move) {
    fixedMove = move;  
}

Move* Computer::makeMove() {
    return new Rock();  
}

std::string Computer::getName() {
    return "Computer";
}
