#ifndef SUB_H
#define SUB_H

#include "operation.h"

class Sub : public Operation {
public:
    Sub(double x, double y) : Operation(x, y) {}
    double calculate() override {
        return a - b;
    }
};

#endif
