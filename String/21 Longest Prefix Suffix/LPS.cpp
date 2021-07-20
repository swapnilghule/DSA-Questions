 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:		

		
	int lps(string s)
	{
	    // Your code goes here
        int j=0;
        int i=1;
        int lps_array[s.length()];
        lps_array[0]= 0;
        while(i < s.length())
        {
            
            if(s[i] ==s[j])
            {
                j++;
                lps_array[i]= j;
                i++;
                
            }
            else
           {
               if(j!=0)
               j= lps_array[j-1];
               else
               {
                   lps_array[i]=0;
                   i++;
               }
    
            }
        }
        
        return lps_array[s.length()-1];
      /*  
        if(s.length()/2 < res)
        return res/2;
        else
        return res;
        */
	}
};

// { Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends