#include <iostream>
#include "sum.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

int main() {
    Operation* op;

    op = new Sum(10, 5);
    std::cout << "Suma: " << op->calculate() << std::endl;
    delete op;

    op = new Sub(10, 5);
    std::cout << "Resta: " << op->calculate() << std::endl;
    delete op;

    op = new Mul(10, 5);
    std::cout << "Multiplicacion: " << op->calculate() << std::endl;
    delete op;

    op = new Div(10, 5);
    std::cout << "Division: " << op->calculate() << std::endl;
    delete op;

    return 0;
}
