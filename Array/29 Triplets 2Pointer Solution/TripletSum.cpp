// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
  bool find3Numbers(int A[], int n, int X)
{
    //Your Code Here
    
    sort(A,A+n);
    int ending_pointer,starting_pointer;
   
    for(int i=0;i<n-2;i++)
    {
        ending_pointer=n-1;                 // Points to last element (Ending pointer)
        starting_pointer=i+1;                //points to 1st index element (Starting pointer)
        
        while(starting_pointer<ending_pointer)
        {
            if(A[i]+A[ending_pointer]+A[starting_pointer]==X)         //check sum in sorted array
            return true;
            else if(A[i]+A[ending_pointer]+A[starting_pointer]<X)   //if small sum than given increment starting pointer
            starting_pointer++;
            else
            ending_pointer--;                       // if big sum than given decrement ending pointer
            
        }
        

    }
    
    return false;
}

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends