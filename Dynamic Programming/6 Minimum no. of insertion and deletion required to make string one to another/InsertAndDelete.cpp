#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string s, string t) 
	{ 
	    // Your code goes here
         int m=s.size();
        int n=t.size();
        
        int dp[m+1][n+1];
        
        
       
        
        
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                dp[i][j]=0;
            }
        }
        
        
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(s[i-1] == t[j-1])
                {
                    dp[i][j] = 1+ dp[i-1][j-1];
                }
                else
                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }
        





        int i=m;
        int j=n;
        string lcs;
        
        
        while(i>0 && j>0)
        {
            if(s[i-1]==t[j-1])
            {
                lcs.push_back(s[i-1]);
                i--;
                j--;
            }
            else
            {
                if(dp[i-1][j] > dp[i][j-1])
                i--;
                else
                j--;
            }
        }
        
        
        reverse(lcs.begin(),lcs.end());
        
        
        int insertion=m- lcs.length();
        int deletion=n - lcs.length();
        
      
        return insertion+deletion;
	    
	    
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends