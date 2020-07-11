//Fibonacci series

0
1 1 
2 3 5 
8 13 21 34 
55 89 144 233 377 

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=1,b=1,c=1;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=i;j++)
       {
           if(i==1)
           {
               cout<<0;
           }
           else if(i==2)
           {
               cout<<1<<" ";
           }
           else{
               c=a+b;
               a=b;
               b=c;
               cout<<c<<" ";
           }

       }
       cout<<"\n";
    }
}