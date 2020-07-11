* * *   * * * 
* *       * * 
*           * 
* *       * * 
* * *   * * * 


#include <iostream>
using namespace std;
int main() {
    int n, star;
    cin>>n;
    star = n/2;
 
    for (int i = 1; i<=(n+1)/2; i++)
    {
        for (int j = 0; j<=star; j++)
        {
            cout<<"* ";
        }
 
        for (int j = 0; j< 2*i-1; j++)
        {
            cout<<"  ";
        }
        for (int j = 0; j<=star; j++)
        {
            cout<<"* ";
        }
 
        star--;
 
        cout<<"\n";
    }
 
    star = 1;
 
    for (int i = 1; i<= (n - 1)/2; i++)
    {
        for (int j = 0; j<= star; j++)
        {
            cout<<"* ";
        }
 
        for (int j = 0 ; j< n-2*i; j++)
        {
            cout<<"  ";
        }

        for (int j = 0; j<= star; j++)
        {
            cout<<"* ";
        }
        
        star++;
 
        cout<<"\n";
    }
    return 0;
}