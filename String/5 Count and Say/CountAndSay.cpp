// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    string lookandsay(int n) {
        // code here
        string res="1";
        
        for(int i=1;i<n;i++)
        {
            res=generate(res);
        }
        
        
        return res;
    }
    
    
    string generate(string str)
    {
        string ans="";
        
        unordered_map<char,int> tempCnt;
        
        
        for(int i=0;i< str.length()+1;i++)
        {
            if(tempCnt.find(str[i])== tempCnt.end() && i >0)
            {
                auto prev= tempCnt.find(str[i-1]);
                ans +=  to_string(prev->second) + prev->first;
                tempCnt.clear();
            }
            else
            tempCnt[str[i]]++;
        }
        
        return ans;
    }
    
    
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}  // } Driver Code Ends