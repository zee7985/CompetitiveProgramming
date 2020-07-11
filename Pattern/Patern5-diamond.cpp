   * 
  * * * 
* * * * * 
  * * * 
    * 



#include <iostream>
using namespace std;
int main() {
    int n, space = 1;
    cin>>n;
    space = n/2;
 
    for (int i = 1; i<=(n/2+1); i++)
    {
        for (int j = 1; j<=space; j++)
        {
            cout<<"  ";
        }
 
        space--;
 
        for (int j = 1; j<= 2*i-1; j++)
        {
            cout<<"* ";
        }
 
        cout<<"\n";
    }
 
    space = 1;
 
    for (int i = 1; i<= (n - 1)/2; i++)
    {
        for (int j = 1; j<= space; j++)
            cout<<"  ";
 
        space++;
 
        for (int j = 1 ; j<= n-2*i; j++)
            cout<<"* ";
 
        cout<<"\n";
    }
    return 0;
}