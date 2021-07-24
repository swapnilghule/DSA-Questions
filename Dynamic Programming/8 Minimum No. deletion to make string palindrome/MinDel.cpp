#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        // code here
     int n=S.length();
     
     string rev=S;
     reverse(rev.begin(),rev.end());

     int m=rev.length();
     int t[n+1][m+1];
     for(int i=0;i<n+1;i++)
     {
         for(int j=0;j<m+1;j++)
         {
             if(i==0 || j==0)
             t[i][j]=0;
         }
     }
     
     
     for(int i=1;i<n+1;i++)
     {
         for(int j=1;j<m+1;j++)
         {
             if(S[i-1]==rev[j-1])
             t[i][j]= 1+ t[i-1][j-1];
             else
             t[i][j]= max(t[i-1][j] ,t[i][j-1]);
         }
     }
     
     return n-t[n][m];

    } 
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
return 0;
}  // } Driver Code Ends