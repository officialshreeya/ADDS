#include "Computer.h"
#include "Monkey.h"
using namespace std;
Move* Computer::makeMove() {
    return new Monkey();  // making compplay monkeys
}
string Computer::getName() {
    return "Computer";
}