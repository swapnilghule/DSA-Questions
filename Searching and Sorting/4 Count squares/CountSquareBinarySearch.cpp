
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int countSquares(int N) {
        // code here


        if(N==0 || N==1)
        return N;
        int square = square_root(N,1,N);
        return square;
    }
    
    int square_root(int N,int low, int high)
    {
        int res=0;
        while(low <= high)
        {
            int mid = (low+high)/2;
            if(mid*mid == N)
            return mid;
            
            
            if(mid <= N/mid)
            {
                low = mid+1;
                res= mid;
            }
            else
               high = mid-1;

        }
        
        return res;
    }
    
};



// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  // } Driver Code Ends