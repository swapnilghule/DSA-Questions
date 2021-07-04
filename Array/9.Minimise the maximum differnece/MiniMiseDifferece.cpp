// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int a[], int n, int k) {
     
     
     sort(a,a+n);
     
     int MiniMised_difference = a[n-1]-a[0];
     
     int smallest_tower=a[0]+k;
     int largest_tower=a[n-1]-k;
     
     int current_mini_tower,current_maxi_tower;
     
     for(int i=0;i<n-1;i++)
     {
         current_mini_tower = min(smallest_tower, a[i+1]-k);
         current_maxi_tower = max(largest_tower , a[i]+k);
         if(current_mini_tower<0)
         continue;
         
         MiniMised_difference = min(MiniMised_difference, current_maxi_tower-current_mini_tower);
     }
    
    return MiniMised_difference;
    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends