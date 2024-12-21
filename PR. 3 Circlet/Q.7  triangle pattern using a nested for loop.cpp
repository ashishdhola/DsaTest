// Q.7 Develop a program that prints the hollow triangle pattern using a nested for loop.
//         *
//        * *
//       *   *
//      *     *
//     * * * * *

#include<iostream>
using namespace std;

int main() 
{
    int n=5 ; 
    
    for(int i=1;i<=n;i++) 
    {
       
        for(int k=1;k<=n-i;k++) 
        {
            cout << " ";  
        }

        for(int j=1;j<=i;j++) 
        {
            if(j == 1 || j == i || i == n) 
            {
                cout << "* ";  
            }
            else 
            {
                cout << "  "; 
            }
        }
        cout <<endl;
    }
}
