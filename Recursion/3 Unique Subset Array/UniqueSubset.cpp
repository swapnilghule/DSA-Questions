// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find all possible unique subsets.
    vector<vector<int>> AllSubsets(vector<int> arr, int n)
    {
        // code here 
     set<vector<int>> s;
     vector<int> curr;
     sort(arr.begin(),arr.end());
     
     UniqueSubset(arr,n,0,curr,s);
     
     vector<vector<int>> res;
     for(auto x:s)
     {
         res.push_back(x);
     }
     
     
     return res;
    }
    
    
    
    void UniqueSubset(vector<int> arr,int n,int start,vector<int> &curr,set<vector<int>> &s)
    {
        if(start==n)
        {
            s.insert(curr);
            return;
        }
        
        UniqueSubset(arr,n,start+1,curr,s);
        curr.push_back(arr[start]);
        UniqueSubset(arr,n,start+1,curr,s);
        
        curr.pop_back();
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends