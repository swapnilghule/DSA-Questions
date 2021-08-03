// { Driver Code Starts
//Initial Template for C++
// https://drive.google.com/drive/folders/1YQKOvHyPDrJr9Dx94I2ptIp1q9qkEntg

#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
    
    int n=str.length();
    for(int i=0,j=n-1;i<j;i++,j--)
    swap(str[i],str[j]);
    
    
    return str;
  //Your code here
}