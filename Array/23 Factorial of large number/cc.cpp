// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution {
public:
    vector<int> factorial(int N){
        // code here
        int resultant[1000];
        vector <int> v;
        resultant[0]=1;
       int  res_size=1;
        for(int x=2;x<=N;x++)
        res_size=multiply(x,resultant,res_size);
        
        
        for(int i=res_size-1;i>=0;i--)
        v.push_back(resultant[i]);
        
        
        
        return v;
    }
    
    
    int multiply(int x,int r[],int r_s)
    {
       int carry=0;
        for(int i=0;i<r_s;i++)
        {
          int  product=  r[i] *x +carry;
            r[i]= product % 10;
            carry= product/10;
        }
        
        
        while(carry)
        {
            r[r_s]=carry%10;
            carry=carry/10;
            r_s++;
        }
        
    return r_s;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends