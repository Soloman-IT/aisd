#include "iostream"

int power(int x,unsigned p)
{   
    int num = 1;
    for(int i = 1;i<p+1;i++)
    {
        num *= x;
    }
    return num;
}
int main()
{
    std::cout << "Write x\n";
    int x;
    std::cin >> x;
    std::cout << "Write p\n";
    unsigned int p;
    std::cin >> p;
    int b = power(x,p);
    std::cout << b;
}