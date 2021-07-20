// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
     int min(int x, int y, int z) { 
         
         if(x<y && x<z)
         return x;
         else if(y<z && y<x)
         return y;
         else
         return z;
         
     }

    int editDistance(string s, string t) {
        // Code here
        
    int m=s.length();
    int n=t.length();
    int dp[m + 1][n + 1];
 
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
        
            if (i == 0)
                dp[i][j] = j; // Min. operations = j
 
        
            else if (j == 0)
                dp[i][j] = i; // Min. operations = i
 
      
            else if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
 
           
            else
                dp[i][j]
                    = 1
                      + min(dp[i][j - 1], // Insert
                            dp[i - 1][j], // Remove
                            dp[i - 1][j - 1]); // Replace
        }
    }
 
    return dp[m][n];
        
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends