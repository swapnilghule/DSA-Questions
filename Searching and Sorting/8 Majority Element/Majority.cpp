#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        unordered_map <int,int> m;
        for(int i=0;i<size;i++)
        m[a[i]]++;
        int major=1;
        int count = 0;
        for(auto x: m)
        {
            if(x.second > size/2){
                major=x.first;
                count=1;
                break;
 
                
            }
            
        }
        if(count==0)
        major=-1;
        
        
        // your code here
        return major;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends