#ifndef SUM_H
#define SUM_H

#include "operation.h"

class Sum : public Operation {
public:
    Sum(double x, double y) : Operation(x, y) {}
    double calculate() override {
        return a + b;
    }
};

#endif
