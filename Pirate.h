#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate : public Move {
public:
    string getName() override { return "Pirate"; }
    bool beats(Move* other) override;
    virtual ~Pirate() {}  // Virtual Destructor
};

#endif
