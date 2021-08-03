// { Driver Code Starts
//Initial Template for C++

// C++ program to check if n is sparse or not
/*
A number is said to be a sparse number if in binary representation of the number no two or more consecutive bits are set. Write a function to check if a given number is Sparse or not.
Example : 

Input:  x  = 72
Output: true
Explanation:  Binary representation of 72 is 01001000. 
There are no two consecutive 1's in binary representation

Input:  x  = 12
Output: false
Explanation:  Binary representation of 12 is 1100. 
Third and fourth bits (from end) are set*/
#include<iostream>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        // Your code
        
        if(n & (n>>1))
        return false;
        
        return true;
        
  
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
    int t,n;
    
    //testcases
    cin>>t;
    while(t--)
    {
        //initializing n
        cin>>n;
        
        //printing 1 if isSparse() returns true
        //else 0
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}
  // } Driver Code Ends