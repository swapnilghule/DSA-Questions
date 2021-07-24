#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
  
    int largestLen(string s, int l,int r)
    {
        while(l>=0 &&r<s.length() &&s[l] ==s[r])
        {
            r++;
            l--;
        }
        
        return r-l-1;
    }
    string longestPalin (string s) {
        // code here
        int start=0,end=0;
        for(int i=0;i<s.length();i++)
        {
            int length= max(largestLen(s,i,i), largestLen(s,i,i+1));
            if(length > end-start)
            {
                start= (i -((length-1)/2));
                end=start+length;
            }
        }
        
        return s.substr(start,end-start);
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends