#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"

class Monkey : public Move {
public:
    string getName() override { return "Monkey"; }
    bool beats(Move* other) override;
    virtual ~Monkey() {}  // Virtual Destructor
};

#endif
