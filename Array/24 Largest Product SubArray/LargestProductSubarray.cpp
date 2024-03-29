// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	
	
	

	long long maxProduct( int *arr, int n) {
	    // code here
	    
	    long long MaxProduct=arr[0];
	    long long int Maxval=arr[0];
	    long long int Minval=arr[0];
	    
	    long long value=0;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]<0)
	        swap(Maxval,Minval);
	         value=arr[i];

	        Maxval= max(value, arr[i]*Maxval);
	        Minval= min(value, arr[i]*Minval);
	        MaxProduct=max(MaxProduct, Maxval);
	    }
	    
	    return MaxProduct;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends