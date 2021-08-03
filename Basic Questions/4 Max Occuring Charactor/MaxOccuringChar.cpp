// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int charArray[256]={0};
        int maxFreq=0;
        
        char ch=0;
        for(int i=0;i<str[i]!='\0';i++)
        {
            charArray[str[i]]++;    // increment frequncy
            
            if(charArray[str[i]]>maxFreq)
            {
                maxFreq=charArray[str[i]];
                
                ch=str[i];
            }
            else if(charArray[str[i]]==maxFreq && str[i]<ch)
            ch=str[i];
        }
        
        return ch;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends