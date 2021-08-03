/*Given a string S of lowercase alphabets, check if it is isogram or not. An Isogram is a 
string in which no letter occurs more than once.

Example 1:

Input:
S = machine
Output: 1
Explanation: machine is an isogram
as no letter has appeared twice. Hence
we print 1.

*/


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
    
      int hash[256]={0};
      
      for(int i=0;i<s.length();i++)
      hash[s[i]]++;
      
      
      for(int i=0;i<256;i++)
      {
          if(hash[i]>1)
          return false;
      }
      
          return true;

    }
    
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends