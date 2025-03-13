#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Paper : public Move {
public:
    std::string getName() override { return "Paper"; }
    bool beats(Move* other) override;
    virtual ~Paper() {}
};

#endif
