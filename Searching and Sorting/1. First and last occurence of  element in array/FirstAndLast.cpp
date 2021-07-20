#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


int first_occurence(int a[], int low, int high, int key)
{
    int res=-1;
    
    while(low <= high)
    {
        int mid=(low+high)/2;
        
        if(a[mid] > key)
        high = mid-1;
        else if (a[mid] < key )
        low = mid+1;
        else
        {
            res= mid;
            high = mid-1;
    
        }
    }
    
    return res;
}


int last_occurence(int a[], int low,int high , int key)
{
    int res= -1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        
        if(a[mid]> key)
        high = mid-1;
        else if (a[mid] < key)
        low = mid +1;
        else {
            res= mid;
            low= mid+1;
        }
        
    }
    
    return res;
}


vector<int> find(int arr[], int n , int x )
{
    vector <int> v;
    int first = first_occurence(arr,0,n-1,x);
    int last = last_occurence(arr,0,n-1,x);
    
    v.push_back(first);
    v.push_back(last);
    
    
    return v;
    
    
    // code here
}