#include "iostream"
#include "cmath"
int main()
{
    std::cout << "Write a ";
    int a;
    std::cin >> a;
    std::cout << "Write b ";
    int b;
    std::cin >> b;
    std::cout << "Write c ";
    int c;
    std::cin >> c;
    
    float d = b*b-4*a*c;
    std::cout <<d;
    if (d > 0 )
    {
        std::cout <<"roots 2\n";
        float x_1 = ((float)(-b+pow(d,0.5)))/2*a;
        float x_2 = ((float)(-b-pow(d,0.5)))/2*a;
        std::cout << x_1 << "  " << x_2;
    }
    else if (d == 0)
    {
        std::cout <<"root 1\n";
        float x_1 = ((float)(-b)/2*a);
        std::cout << x_1;
    }
    else
    {
        std::cout <<"no roots";
    }



}