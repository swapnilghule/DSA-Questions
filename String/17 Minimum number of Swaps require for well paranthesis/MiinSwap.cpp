#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
        int countRight=0;
        int countLeft=0;
        int inbalance=0;
        int swap=0;
        
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='[')
            {
                countLeft++;
                if(inbalance > 0)
                {
                    swap= swap+ inbalance;
                    inbalance--;
                }
      
            }
            
            else if(S[i]==']')
            {
                countRight++;
                inbalance=countRight - countLeft;
            }
        }
        
        return swap;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends