  *
 * *
*   *
 * *
  *

  
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

   int space =n/2;
    for(int i=1;i<=(n+1)/2;i++)
    {
       for(int j=1;j<=space;j++)
       {
           cout<<" ";
       }
        cout<<"*";
        for (int k = 1; k < 2*(i -1) ;k++) 
        {
            cout<<" "; 
        } 
        if( i==1) {
            cout<<"\n"; 
        }
        else { 
            cout<<"*\n"; 
        } 
        space--;
    } 
    space =1;
    for (int i=1; i<=(n-1)/2 ; i++)
    {
        for (int j = 1; j <= space ; j++) 
        {
           cout<<" ";
        }
        cout<<"*";
        for (int k = 1; k < 2*(n/2-i) ;k++) {
           cout<<" ";
        }
        if( i==(n-1)/2)
        {
            cout<<"\n";
        }
        else
        {
            cout<<"*\n";
        }
        space++;
    }
}
