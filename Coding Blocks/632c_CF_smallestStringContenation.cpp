#include <bits/stdc++.h>
using namespace std;
bool myCompare(string a,string b){
    return a+b<b+a;
}
int main() {
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),myCompare);
    string s="";
    for(int i=0;i<n;i++){
        s+=v[i];
    }
    cout<<s;
}
