#include "iostream"
using namespace std;



int main() {
    int num_1;
    cin >> num_1;
    int num_2;
    int num_3;
    int rr_1[num_1];
    rr_1[0] = 1;
    rr_1[1] = 1;
    
    for (int i=2;i<num_1;i++) 
    {
        num_2 = rr_1[i-2];
        num_3 = rr_1[i-1];
        rr_1[i] = num_1 + num_2;
    }
    
    
    cout << rr_1[num_1-1];
    return 0;
}