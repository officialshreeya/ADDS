#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie : public Move {
public:
    string getName() override { return "Zombie"; }
    bool beats(Move* other) override;
    virtual ~Zombie() {}
};

#endif
