#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
       unordered_map<int,int> mp;
       vector<int> v;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;
       for(int i=0;i<nums.size();i++)
       mp[nums[i]]++;
       
       for(auto x: mp)
       {
           minHeap.push({x.second,x.first});
           if(minHeap.size() > k)
           {
               minHeap.pop();
           }
       }
       
       while(minHeap.empty()==0)
       {
           
           v.push_back(minHeap.top().second);
           minHeap.pop();
       }
       
       sort(v.begin(),v.end());
       return v;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends