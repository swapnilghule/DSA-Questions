// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here.
    #define d 256
    int q=101;
    int pattern_length = pat.length();
    vector<int> v;
    int text_length = txt.length();
    int i, j;
    int pattern_hash = 0; // hash value for pattern
    int text_hash = 0; // hash value for txt
    int hash = 1;
 
    // The value of h would be "pow(d, M-1)%q"
    for (i = 0; i < pattern_length - 1; i++)
        hash = (hash * d) % q;
 
    // First Window hash value
    for (i = 0; i < pattern_length; i++)
    {
        pattern_hash = (d * pattern_hash + pat[i]) % q;
        text_hash = (d * text_hash + txt[i]) % q;
    }
 
    // Slide the pattern over text one by one
    for (i = 0; i <= text_length - pattern_length; i++)
    {
 
    
        if ( pattern_hash == text_hash )
        {
            for (j = 0; j < pattern_length; j++)
            {
                if (txt[i+j] != pat[j])
                    break;
            }
 
            if (j == pattern_length)
                v.push_back(i+1);
        }
 
        // Calculate hash value for next window of text:
      
        if ( i < text_length - pattern_length )
        {
            text_hash = (d*(text_hash - txt[i]*hash) + txt[i+pattern_length])%q;
 
       
            if (text_hash < 0)
            text_hash = (text_hash + q);
        }
        
    }
    
    
    if(v.size()==0)
    v.push_back(-1);
    
    return v;
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends