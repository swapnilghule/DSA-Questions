// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy4 (string str)
	{
	    // Your Code Here
	    if(str.size()==1)
	    return (str[0]=='4'|| str[0]=='8') ? 1:0;
	    else
	    return stoi(str.substr(str.size()-2))% 4==0 ? 1:0;
	}
};

// { Driver Code Starts.

int32_t main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy4 (s) << endl;
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends