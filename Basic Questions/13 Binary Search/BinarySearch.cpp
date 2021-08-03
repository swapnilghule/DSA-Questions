// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        // code here
        
       int index=bSearch(arr,0,n-1,k);
      
       return index;
    }
    
    
    int bSearch(int a[],int low,int high,int key)
    {
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(a[mid]==key)
            return mid;
            
            else if(a[mid]<key)
            low=mid+1;
            
            else if(a[mid]>key)
            high=mid-1;
            
            
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
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        int found = ob.binarysearch(arr,N,key);
        cout<<found<<endl;
    }
}

  // } Driver Code Ends