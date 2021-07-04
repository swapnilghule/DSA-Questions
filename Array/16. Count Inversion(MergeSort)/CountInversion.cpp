// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
    long long temp[N];

    return _merge_sort(arr,temp,0,N-1);
    
    
   
    }
    
    
    long long int _merge_sort(long long arr[], long long temp[],long long int left,long long int right)
    {
       long long int mid, inv_cnt=0;
        
        if(right >left)
        {
            mid= (right+left)/2;
           inv_cnt+= _merge_sort(arr,temp,left,mid);
           inv_cnt+= _merge_sort(arr,temp,mid+1,right);
           
           inv_cnt+= mergeSort(arr,temp,left,mid+1,right);
        }
        
    return inv_cnt;    
    }
    
    
    long long int mergeSort(long long arr[],long long temp[],long long int left,long long int mid,long long int right)
    {
        long long int i=left;
       long long int j=mid;
        long long int k=left;
       long long int inversion=0;
       
       while((i<=mid-1) && (j<=right))
       {
           if(arr[i]<=arr[j])
           {
               temp[k++]=arr[i++];
           }
           else
           {
           temp[k++]=arr[j++];
           inversion= inversion+ (mid-i);
           }
       }
       
       
       while(i<=mid-1)
       temp[k++]=arr[i++];
       
       while(j<=right)
       temp[k++]=arr[j++];
       
       
       for (i = left; i <= right; i++)
        arr[i] = temp[i];
       
       return inversion;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends