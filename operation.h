#ifndef OPERATION_H
#define OPERATION_H

class Operation {
protected:
    double a, b;

public:
    Operation(double x, double y) : a(x), b(y) {}
    virtual double calculate() = 0;
    virtual ~Operation() {}
};

#endif
