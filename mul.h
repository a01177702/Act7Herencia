#ifndef MUL_H
#define MUL_H

#include "operation.h"

class Mul : public Operation {
public:
    Mul(double x, double y) : Operation(x, y) {}
    double calculate() override {
        return a * b;
    }
};

#endif
