

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    
	  vector<int> pos,neg;

	
	  for(int i=0;i<n;i++)
	  {
	      if(arr[i]>=0)
	      {
	          pos.push_back(arr[i]);
	          
	      }
	      else
	      {
	          neg.push_back(arr[i]);
	        
	      }
	  }
	  
  int i=0;
  int k=0;	  	
  while(pos.size()==0 && neg.size()==0)
  {
    

      arr[k++]=pos[i++];
      arr[k++]=neg[i++];
  } 	


  while(pos.size()!=0)
  {
      arr[k++]=pos[i++];
  }

  while(neg.size()!=0)
  {
      arr[k++]=neg[i++];
  }





    }
};

// { Driver Code Starts.

int main() {
    int t;
    cout<<2/10;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends