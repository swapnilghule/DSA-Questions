#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string, int> mp;
        
        
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        
       
        int first_max=INT_MIN;
        int second_max=INT_MIN;
        
        for( auto it= mp.begin(); it != mp.end();it++)
        {
           if(it->second > first_max)
           {
               second_max= first_max;
               first_max= it->second;
           }
           
           else if(it->second > second_max && it->second != first_max)
           {
               second_max= it->second;
           }
        }
        
        
        for( auto it= mp.begin(); it!= mp.end();it++)
        if(it->second==second_max)
        return it->first;
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
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends