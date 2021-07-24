#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
/*You are required to complete this method*/
    int wildCard(string pattern,string str)
    {
        int n= pattern.length();
        int m= str.length();
        
        int t[n+1][m+1];

        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                t[i][j]=0;;
            }
        }
        t[0][0]= 1;
        
        for(int i=1;i <n+1;i++)
        {
            if(pattern[i-1] == '*')
            t[i][0]= t[i-1][0];
        }
        
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(pattern[i-1] == str[j-1] || pattern[i-1]== '?')
                t[i][j] =  t[i-1][j-1];
                
                else if(pattern[i-1]=='*')
                t[i][j] = t[i][j-1] || t[i-1][j];
                else
                t[i][j] =0;
                
                
          

            }
        }
        
        return t[n][m];
    }
};

// { Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
           string pat,text;
           cin>>pat;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
           cin>>text;
           Solution obj;
           cout<<obj.wildCard(pat,text)<<endl;
   }
}
  // } Driver Code Ends