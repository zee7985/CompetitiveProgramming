      1 
    2 3 2 
  3 4 5 4 3 
4 5 6 7 6 5 4 
  3 4 5 4 3 
    2 3 2 
      1 


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
        int k=i;   
        for (int j = 1;j<= 2*i-1; j++)
        {
            if(j<=i)
            {
                cout<<k<<" ";
                k++;
            }
            else{
                cout<<k-2<<" ";   // -2 because previous will be incremented
                k--;
            }
        }
 
        cout<<"\n";
    }
 
    space = 1;
 
    for (int i = 1; i<= (n - 1)/2; i++)
    {
        for (int j = 1; j<= space; j++)
            cout<<"  ";
 
        space++;

        int k=(n+1)/2-i;
        for (int j = 1 ; j<= n-2*i; j++)
        {
            if(j<=(n+1)/2-i)
            {
                cout<<k<<" ";
                k++;
            }
            else
            {
                cout<<k-2<<" ";
                k--;
            }
        }
        cout<<"\n";
    }
    return 0;
}