// Ques3. find equilibrium 
// index of an array 
#include <bits/stdc++.h> 
using namespace std; 

int equilibrium(vector<int> arr, int n) 
{ 
	int sum = 0; 
	int leftsum = 0; 

	// Find sum of the whole array 
	for (int i = 0; i < n; ++i) 
		sum += arr[i]; 

	for (int i = 0; i < n; ++i) 
	{ 
		sum -= arr[i]; //Start deleting element from whole array sum till it become equal to leftsum

		if (leftsum == sum) 
			return i; 

		leftsum += arr[i]; 
	} 

	return -1; 
} 

int main() 
{ 
    int n;
    cin>>n;
	vector<int>arr(n); 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	cout <<equilibrium(arr, n); 
	return 0; 
} 

 
