// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
void filllps(string s,int lps[])
	{
	    // Your code goes here
	    int n=s.length();
	    lps[0]=0;
	    int len=0;
	    int i=1;
	    while(i<n)
	    {
	        if(s[i]==s[len])
	        {
	            len++;
	            lps[i]=len;
	            i++;
	        }
	        else
	        {
	            if(len==0)
	            {
	                lps[i]=0;
	                i++;
	            }
	            else
	            {
	                len=lps[len-1];
	            }
	        }
	    }
	}
int strstr(string txt, string pat)
{
     //Your code here
     int n=txt.length();
     int m=pat.length();
     int lps[m];
     filllps(pat,lps);
     int i=0,j=0;
     while(i<n)
     {
         if(pat[j]==txt[i])
         {
             i++;
             j++;
         }
         if(j==m)
         {
             return (i-j);
             j=lps[j-1];
         }
         else if(i<n && pat[j]!=txt[i])
         {
             if(j==0)
             {
                 i++;
             }
             else
             {
                 j=lps[j-1];
             }
         }
     }
     return -1;
}