// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here
            
           vector<long long int> LPS;
           vector<int> res;
            LPS=LPSArray(pat,pat.length());
           long long int M=pat.length();
           long long int N=txt.length();
            
             long long  int i=0;
             long long  int j=0;
            
            while(i<N)
            {
                if(pat[j]==txt[i])
                {
                    i++;
                    j++;
                }
                
                if(j==M)
                {
                res.push_back(i-j+1);
                j=LPS[j-1];
                }
                else if(i<N && pat[j]!=txt[i])
                {
                    if(j!=0)
                    j= LPS[j-1];
                    else
                    i++;
                }
                
            }
            
            if(res.size()==0)
            res.push_back(-1);
            
            return res;
            
            
        }
        
        
        vector<long long int> LPSArray(string pat, int size)
        {
          vector<long long int> LPS={0};
            
           
            long long int j=0;
            long long int i=1;
            
            while(i<size)
            {
                if(pat[i]==pat[j])
                {
                    j++;
                    LPS[i]=j;
                    i++;
                }
                
                else
                {
                    if(j!=0)
                    j=LPS[j-1];
                    else
                    {
                        LPS[i]=0;
                        i++;
                    }
                }
            }
            
            
            return LPS;
            
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
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends