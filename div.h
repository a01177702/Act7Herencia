#ifndef DIV_H
#define DIV_H

#include "operation.h"
#include <stdexcept>

class Div : public Operation {
public:
    Div(double x, double y) : Operation(x, y) {}
    double calculate() override {
        if (b == 0) throw std::invalid_argument("Division by zero");
        return a / b;
    }
};

#endif
