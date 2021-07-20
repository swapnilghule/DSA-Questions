#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int search(int a[], int low, int high, int key){
    //complete the function here
     if(low> high)
     return -1;
     
     int mid = (low +high) /2;
     
     if(a[mid] == key)
     return mid;
     
     if(a[low] <= a[mid])
     {
         if(key >= a[low] && key <= a[mid])   // check first half is sorted or not
         return search(a,low,mid-1,key);  
         
         return search(a,mid+1,high,key);
         
     }
     
     if(key >= a[mid] && key <=a[high])  // if it is not then it definitely sorted
     
         return search(a,mid+1,high,key);
     
     
        return search(a,low,mid-1,key);
       
      
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends