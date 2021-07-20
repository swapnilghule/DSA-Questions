#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
    vector<vector<int> > res;
    set<vector <int>> ans;
    int n= arr.size();
    sort(arr.begin(), arr.end());
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1; j<n-2;j++)
        {
            int left=j+1 , right=n-1;
            while(left< right)
            {
                if(arr[i] + arr[j] + arr[left] + arr[right] >k)
                right--;
                else if(arr[i] + arr[j] + arr[left] + arr[right] ==k)
                {
                    vector<int> v;
                    v.push_back(arr[i]);
                    v.push_back(arr[j]);
                    v.push_back(arr[left]);
                    v.push_back(arr[right]);
                    ans.insert(v);
                    left++;
                   
                }
                else
                left++;
            }
        }
    }
    
    for(auto it: ans)
    res.push_back(it);
    
    
    return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends