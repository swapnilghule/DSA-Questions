#include<iostream>
using namespace std;


vector<int> HeapSort(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> minHeap;
    vector<int> v;
    
    for(int i=0;i<n;i++)
    {
        minHeap.push(arr[i]);
        if(minheap.size()>k)
        {
            v.push_back(arr[i]);
            maxheap.pop();
            
        }
    }
    
    while(maxHeap.size()!=0)
    {
        v.push_back(arr[i]);
        maxHeap.pop();
    }
    
    return v;
    
}
int main()
 {
	//code
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        vector<int> v;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        v=HeapSort(a,n,k);
        
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        
    }
	return 0;
}