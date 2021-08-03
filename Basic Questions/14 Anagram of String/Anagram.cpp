// { Driver Code Starts
/*
Given two strings S1 and S2 in lowercase, the task is to make them anagram. 
The only allowed operation is to remove a character from any string.
 Find the minimum number of characters to be deleted to make both the strings anagram. 
 Two strings are called anagram of each other if one of them can be converted into another
  by rearranging its letters.

Example 1:

Input:
S1 = bcadeh
S2 = hea
Output: 3
Explanation: We need to remove b, c
and d from S1.


*/
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here

    if(str1.size()<str2.size())
    swap(str1,str2);
    
    int hashStr[26]={0};
    for(int i=0;i<str1.size();i++)
    hashStr[str1[i]-'a']++;
    
    for(int i=0;i<str2.size();i++)
    hashStr[str2[i]-'a']--;
    
    
    int res=0;
    
    for(int i=0;i<26;i++)
    res+= abs(hashStr[i]);
    
    return res;
}