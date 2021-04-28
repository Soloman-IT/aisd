#include "iostream"
using namespace std;



int main() {
    int num_1; 
    int num_2;
    
    
    cin >> num_1 >> num_2;
    
    int a[num_1][num_2];
    for (int i = num_1 - 1 ; i > -1 ; i--) 
    {
       for (int j = 0;j < num_2; j++) 
       {
            if (i == num_1 - 1) 
            
               a[i][j] = 1;
               
            else if (j == 0)
            
                a[i][j] = 1;
                
            else 
            
                a[i][j] = a[i][j-1] + a[i+1][j];
        }
    }
    cout << a[0][num_2-1];
    return 0;
}