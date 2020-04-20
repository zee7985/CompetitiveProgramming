//Ques7.chocolate distributionproblem-// Returns minimum difference between maximum and minimum values of distribution.
#include<bits/stdc++.h> 
using namespace std; 


int chocolate(vector<int>arr, int n, int m) 
{ 

	if (m==0 || n==0) 
		return 0; 


	sort(arr.begin(), arr.end()); 

	// Number of students(m) cannot be more than 
	// number of packets 
	if (n < m) 
	return -1; 

	int min_diff = INT_MAX; 

	// Find the subarray of size m such that 
	// difference between last (maximum in case 
	// of sorted) and first (minimum in case of 
	// sorted) elements of subarray is minimum. 
	for (int i=0; i+m-1<n; i++) 
	{ 
		int diff = arr[i+m-1] - arr[i]; 
		if (diff < min_diff) 
		{ 
			min_diff = diff; 
		} 
	} 
	return min_diff; 
} 

int main() 
{ 
	int n,m;
    cin>>n>>m;
	vector<int>arr(n); 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	cout << chocolate(arr, n, m); 
	return 0; 
} 
