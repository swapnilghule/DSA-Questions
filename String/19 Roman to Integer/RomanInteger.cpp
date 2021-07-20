// { Driver Code Starts
// Initial template for C++

// Program to convert Roman Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;

// Returns decimal value of roman numaral
int romanToDecimal(string &);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << romanToDecimal(s) << endl;
    }
}// } Driver Code Ends


// User fuunction teemplate for C++

// str given roman number string
// Returns decimal value of roman numaral
int romanToDecimal(string &str) {
    // code here
    unordered_map<char,int > mp;
    
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
    int res=0;
    
    for(int i=0;i<str.size();i++)
    {
        if(mp[str[i]] <mp[str[i+1]] && i+1< str.size())  // compare first element's value  with next 
        {
            res=res+ mp[str[i+1]] - mp[str[i]];  // if first is small (substartc bigger-smaller)
            i++;  
       }
        else
        {
            res=res+ mp[str[i]];  // add small
        }
    }
    
    
    return res;
}