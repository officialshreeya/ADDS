#ifndef MOVE_H
#define MOVE_H
#include <string>
using namespace std;
class Move {
public:
    virtual string getName() = 0;  // name of move
    virtual bool beats(Move* other) = 0;  // Determines move beatings
    virtual ~Move() {}
};
#endif