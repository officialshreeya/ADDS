#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja : public Move {
public:
    string getName() override { return "Ninja"; }
    bool beats(Move* other) override;
    virtual ~Ninja() {}  
};

#endif
