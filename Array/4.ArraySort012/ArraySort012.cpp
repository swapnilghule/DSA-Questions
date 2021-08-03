// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int low=0, medium=0, high=n-1;
        
        while(medium<=high)
        {
            if(a[medium]==0)
            {
                swap(a[medium],a[low]);
                low++;
                medium++;
            }
            else if(a[medium]==1)
            {
                medium++;
            }
          else  if(a[medium]==2)
            {
                swap(a[medium],a[high]);
                high--;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends