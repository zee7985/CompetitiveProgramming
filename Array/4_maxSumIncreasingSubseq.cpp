//Ques4. Maximum Sum Increasing Subsequence -returns the maximumsum of increasing subsequence 

//Similar to LIS-change is to use sum as a criteria instead of length(in LIS).
#include <bits/stdc++.h> 
using namespace std; 


int maxSumIS(vector<int> arr, int n) 
{ 
	int i, j, max = 0; 
	vector<int> dp(n); 

	for ( i = 0; i < n; i++ ) {
		dp[i] = arr[i];         //Fill the dp array with initial value  -like 1 in LIS
    }
	
	for ( i = 1; i < n; i++ )
    { 
		for ( j = 0; j < i; j++ ) 
        {
			if (arr[i] > arr[j] && dp[i] < dp[j] + arr[i])
            {
				dp[i] = dp[j] + arr[i]; 
            }
        }
    }

	for ( i = 0; i < n; i++ )
    {
		if ( max < dp[i] ) 
        {
			max = dp[i]; 
        }
    }
	return max; 
} 

int main() 
{ 
    int n;
    cin>>n;
	vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	cout << maxSumIS( arr, n ) << endl; 
	return 0; 
} 

