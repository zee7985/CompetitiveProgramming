 // Ques 6. find a pair with the given difference 

 //Can be also done by 2 loops(O(n^2)),sort and then binary search(O(nlogn)and map(O(n))
#include <bits/stdc++.h> 
using namespace std; 


bool findPair(vector<int> arr, int n, int difference) 
{ 
   sort(arr.begin(),arr.end()); 
	int i = 0; 
	int j = 1; 

	while (i < n && j < n) 
	{ 
		if (i != j && arr[j] - arr[i] == difference) 
		{ 
			cout << arr[i] << "," << arr[j] ;
			return true; 
		} 
		else if (arr[j]-arr[i] < n) 
			j++; 
		else
			i++; 
	} 

	cout << "No pair"; 
	return false; 
} 

int main() 
{ 
    int n,diff;
    cin>>n>>diff;

	vector<int>arr(n); 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

	findPair(arr, n, diff); 
	return 0; 
} 


