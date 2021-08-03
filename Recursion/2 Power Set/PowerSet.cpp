// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> res;
		    string ip=s,op="";
		    PowerSet(ip,op,res);
		    sort(res.begin(),res.end());
		    return res;
		}
		
		
		void PowerSet(string ip, string op,vector<string> &res)
		{
		    if(ip.length()==0)
		    {
		        if(!op.empty())
		        res.push_back(op);
		        return;
		    }
		    
		    string op1=op;
		    string op2=op;
		    
		    op2.push_back(ip[0]);
		    ip.erase(ip.begin()+0);
		    
		    PowerSet(ip,op1,res);
		    PowerSet(ip,op2,res);
		    
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends