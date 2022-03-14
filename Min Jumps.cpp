#include<bits/stdc++.h>
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
