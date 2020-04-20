// Ques8.  find minimum number of platforms 
// required on a railway station 
#include<iostream> 
#include<algorithm> 

using namespace std; 


int findPlatform(int arr[], int dep[], int n) 

{ 

sort(arr, arr+n); 
sort(dep, dep+n); 

int plat_needed = 1, ans = 1; 
int i = 1, j = 0;         //Start from 1st arrival and 0th departure

 
while (i < n && j < n) 
{ 
	
	if (arr[i] <= dep[j])   //Check if departure time is greater than arrival increment platform needed
	{ 
		plat_needed++; 
		i++;                       //if yes increment arrival++

		if (plat_needed > ans) //Update ans
			ans = plat_needed; 
	} 

	else
	{ 
		plat_needed--; //if departure less than arrival decrement platform needed
		j++; 
	} 
} 

return ans; 
} 


int main() 
{ 
	int arr[] = {900, 940, 950, 1100, 1500, 1800}; 
	int dep[] = {910, 1200, 1120, 1130, 1900, 2000}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout << findPlatform(arr, dep, n); 
	return 0; 
} 
