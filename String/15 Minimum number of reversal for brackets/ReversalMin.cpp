#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    int left_brace=0, right_brace=0;
    if(s.length() %2 != 0)
    return -1;
    
    int ans=0;
    
    for(int i=0;i<s.length();i++)
    {
        
        
        if(s[i] == '{')
        left_brace++;
        else
        {
            if(left_brace==0)
            {
                left_brace++;
                ans++;
            }
            else
            left_brace--;
            
        }
         
         
      

    }
    
    
    
    return ans+ (left_brace/2) ;
}