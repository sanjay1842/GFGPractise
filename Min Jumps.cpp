/*#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
int jumpMin(int arr[], int n){
  int count=0;
  int maxx=arr[0];
  int jump=arr[0];
  if(jump==0){
    if(n==1)
        return 0;
    return -1;
  }
  for(int i=0;i<n-1;i++){
    maxx--;
    maxx=max(maxx,arr[i]);
    jump--;
    if(jump==0){
      jump=maxx;
      count++;
    }
    if(jump<=0)
        return -1;
    
}
  return count;
}
};


int main()
{
int t;
cin>>t;
while(t--){
int n,i,j;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  Solution obj;
  cout<<obj.jumpMin(arr,n)<<endl;
}
  return 0;
}
*/
//Optimised Code:// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

// C++ program to count Minimum number
// of jumps to reach end
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

int max(int x, int y)
{
	return (x > y) ? x : y;
}

// Returns minimum number of jumps
// to reach arr[n-1] from arr[0]
int minJumps(int arr[], int n)
{

	// The number of jumps needed to
	// reach the starting index is 0
	if (n <= 1)
		return 0;

	// Return -1 if not possible to jump
	if (arr[0] == 0)
		return -1;

	// initialization
	// stores all time the maximal
	// reachable index in the array.
	int maxReach = arr[0];

	// stores the number of steps
	// we can still take
	int step = arr[0];

	// stores the number of jumps
	// necessary to reach that maximal
	// reachable position.
	int jump = 1;

	// Start traversing array
	int i = 1;
	for (i = 1; i < n; i++) {
		// Check if we have reached the end of the array
		if (i == n - 1)
			return jump;

		// updating maxReach
		maxReach = max(maxReach, i + arr[i]);

		// we use a step to get to the current index
		step--;

		// If no further steps left
		if (step == 0) {
			// we must have used a jump
			jump++;

			// Check if the current index/position or lesser index
			// is the maximum reach point from the previous indexes
			if (i >= maxReach)
				return -1;

			// re-initialize the steps to the amount
			// of steps to reach maxReach from position i.
			step = maxReach - i;
		}
	}

	return -1;
}
};




// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
