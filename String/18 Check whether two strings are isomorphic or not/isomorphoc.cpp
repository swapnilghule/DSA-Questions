// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.length() != str2.length())
        return false;
        #define MaxChar 256
        
        int CountStr1[MaxChar] ={0};
        int CountStr2[MaxChar] ={0};
        
        
        for(int i=0;i<str1.length();i++)
        {
            CountStr1[str1[i]]++;
            CountStr2[str2[i]]++;
            
            
            if(CountStr1[str1[i]] != CountStr2[str2[i]])
            return false;
            
            
        }
        
        return true;
     
        
        // Your code here
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends