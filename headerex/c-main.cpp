#include <iostream> // std::cout, std::endl
#include "sum.h" // sumI, sum

void printSum(int a, int b) {
    std::cout << a << " + " << b << " = " << sumI(a, b) << std::endl;
}

void printSum(float a, float b) {
    std::cout << a << " + " << b << " = " << sumF(a, b) << std::endl;
}

extern "C" void printSumInt(int a, int b) {
    printSum(a, b);
}

extern "C" void printSumFloat(float a, float b) {
    printSum(a, b);
}


int main(int argc, char* argv[]) {
    printSumInt(1, 2);
    printSumFloat(1.5f, 2.5f);
    return 0;
}
