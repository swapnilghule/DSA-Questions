// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      
      sort(arr,arr+N);   // sort Array
      
      int count=0,ans=0;
      
      vector <int>v;
      v.push_back(arr[0]);
      for(int i=1;i<N;i++)   // Put avoid duplicate element in array
      {
          if(arr[i-1] != arr[i])
          v.push_back(arr[i]);
      }
      
      
     for(int i=0;i<v.size();i++)
    {
        if(i>0 && v[i] == v[i-1]+1)   // check whether Array Previous element is +1 than current element 
        count++;                      // increment count
        else
        count=1;                      //reset count 
        ans=max(ans,count);           // find maximum so far
    }
    
    
    return ans;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends