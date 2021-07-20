// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    long long count=0;
	    int starting_pointer,ending_pointer;
	    
	    for(int i=0;i<n-2;i++)
	    {
	        starting_pointer=i+1;
	        ending_pointer=n-1;
	        
	        while(starting_pointer < ending_pointer)
	        {
	            
	            if(arr[i]+arr[starting_pointer]+arr[ending_pointer]>=sum)
	            {
	            ending_pointer--;     
	            
	            }
	            
	            else 
	            {
	            count = count+ (ending_pointer-starting_pointer);
	            starting_pointer++;
	            }
	            
	        }
	    }
	    
	    
	    return count;
	    
	    
	    
	    
	}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends