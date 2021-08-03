// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int a[], int n) {
	    // code 
	    
	    sort(a,a+n);
	    
	    for(int i=n-1;i>1;i--)
	    {
	        int start=0,end=i-1;
	        
	        while(start<end)
	        {
	            int a_ = a[start]*a[start];
	            int b_  = a[end] *a[end];
	            int c_ =a[i]*a[i];
	            if(a_+b_==c_)
	            return true;
	            else if(a_+b_>c_)
	            end--;
	            else if(a_+b_<c_)
	            start++;


	        }
	    }
	    
	    return false;
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
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends