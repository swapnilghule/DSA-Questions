// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int peak_element=-1;
        for(int i=1;i<N;i++)   // get highest element from array
        {
            if(arr[i]>arr[i-1])
            peak_element=i;
        }
        
        if(peak_element==-1)        // If array is Descedning array
        {
        sort(arr.begin(),arr.end());
        return arr;
        }
        
        
        int index= peak_element;
        
        for(int i=peak_element;i<N;i++)   // from peak_element if there is element which greater than previous-1 eleemnt && lower than peak_element 
        {
            if(arr[peak_element-1] < arr[i] && arr[peak_element] > arr[i])
            index=i;
        }
        
        swap(arr[index],arr[peak_element-1]);   //swap the element
        sort(arr.begin()+peak_element,arr.end()); // sort the array
        
        
        return arr;
        
        
        
     
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends