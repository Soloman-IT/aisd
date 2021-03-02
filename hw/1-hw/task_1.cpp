#include <iostream>

int main()
{   
    int a;

    std::cout << "enter the number of terms :";
    std::cin >> a;
    int n, sum = 0;
    for (int i = 0; i < a; i++)
    {
        std::cin >> n;
        sum += n;   


    }
    std::cout << sum;
}