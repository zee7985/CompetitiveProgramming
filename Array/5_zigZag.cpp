// Ques5.sort an array in Zig-Zag form 
#include <bits/stdc++.h> 
using namespace std; 

void zigZag(vector<int> &arr, int n) 
{ 
    // Maintain a flag for representing which order(i.e. < or >) currently we need.
    //If the current two elements are not in that order then swap those elements otherwise not.
	bool flag = true; 

	for (int i=0; i<=n-2; i++) 
	{ 
		if (flag==true) 
		{ 
			//If it is of type A > B 
			if (arr[i] > arr[i+1]) 
				swap(arr[i], arr[i+1]); 
		} 
		else 
		{ 
			// If we have a situation like A < B  
			
			if (arr[i] < arr[i+1]) 
				swap(arr[i], arr[i+1]); 
		} 
		flag = !flag; //After every step flip the flag
	} 
} 

 
int main() 
{ 
    int n;
    cin>>n;
	vector<int>arr(n); 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	zigZag(arr, n); 
	for (int i=0; i<n; i++)
     {
		cout << arr[i] << " ";
    } 
	return 0; 
} 
