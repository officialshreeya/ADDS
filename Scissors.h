#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors : public Move {
public:
    std::string getName() override { return "Scissors"; }
    bool beats(Move* other) override;
    virtual ~Scissors() {}
};

#endif
