#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {
    
    int num;    
    string str_1, str_2;
    cin >> str_1 >> str_2 >> num;
    
    sort(str_1.begin(), str_1.end());
    sort(str_2.begin(), str_2.end());

    while (next_permutation(str_1.begin(), str_1.end()))
    {
        while (next_permutation(str_2.begin(), str_2.end()))
        {
            if (stoi(str_2) + stoi(str_1) == num){
                cout << str_1 << " + " << str_2 << " = " << num;
                return 0;
            }
        }
        
    } 
}