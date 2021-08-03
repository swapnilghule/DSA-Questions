// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
       int ans=-1;
       k=k-1;
       vector<int> v;
       for(int i=1;i<=n;i++)
       v.push_back(i);
       int index=0;
       Problem(v,k,index,ans);
       
       return ans;
    }
    
    
    void Problem(vector<int> v,int k,int index,int &ans)
    {
        if(v.size()==1)
        {
            ans=v[0];
            return;
        }

        index=(index+k)%v.size();
        v.erase(v.begin()+index);

        Problem(v,k,index,ans);
    }
};



// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends