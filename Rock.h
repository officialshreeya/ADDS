#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock : public Move {
public:
    string getName() override { return "Rock"; }
    bool beats(Move* other) override;
    virtual ~Rock() {}
};

#endif
