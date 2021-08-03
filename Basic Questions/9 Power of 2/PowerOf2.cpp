/*bool b = IsPowerOfTwo(4)
Now we replace each occurrence of x with 4:

return (4 != 0) && ((4 & (4-1)) == 0);
Well we already know that 4 != 0 evals to true, so far so good. But what about:

((4 & (4-1)) == 0)
This translates to this of course:

((4 & 3) == 0)
But what exactly is 4&3?

The binary representation of 4 is 100 and the binary representation of 3 is 011 (remember the & takes the binary representation of these numbers). So we have:

100 = 4
011 = 3
Imagine these values being stacked up much like elementary addition. The & operator says that if both values are equal to 1 then the result is 1, otherwise it is 0. So 1 & 1 = 1, 1 & 0 = 0, 0 & 0 = 0, and 0 & 1 = 0. So we do the math:

100
011
----
000
The result is simply 0. So we go back and look at what our return statement now translates to:

return (4 != 0) && ((4 & 3) == 0);
Which translates now to:

return true && (0 == 0);
return true && true;
We all know that true && true is simply true, and this shows that for our example, 4 is a power of 2.


*/



// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here   
            return (n > 0) && ((n & (n - 1)) == 0);

        
    }
};

// { Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}
  // } Driver Code Ends