// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string result="";
        int i=0;
        int n1=arr[0].size();
        char ch;
        while(i<n1)
        {
            ch=arr[0][i];  // fecth frist charater of arr1
            
            for(int j=1;j<N;j++)
            {
                if(i >= arr[j].size() || arr[j][i] != ch)  // check whether charator missmatch
                {
                    if(result != "")
                    return result;
                    else
                    return "-1";
                }
            }
            result.push_back(ch);
            i++;
        }
        
        return result;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends