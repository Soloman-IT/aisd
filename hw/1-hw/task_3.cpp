#include "iostream"
#include "math.h"

int main()
{
    std::cout << "Write x\n";
    int x;
    std::cin >> x;
    float b  = (int)sqrt(x);
    std::cout << b;
}