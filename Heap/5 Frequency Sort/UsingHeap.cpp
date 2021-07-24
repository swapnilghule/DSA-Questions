#include<bits/stdc++.h>
using namespace std;




vector<int> frequencySort(int arr[],int n)
{
    vector<int> v;
    priority_queue <pair<int,int>> maxHeap;
    unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++)
    mp[arr[i]]++;
    
    for(auto x:mp)
    {
        maxHeap.push({x.second,x.first});
    }
    
   
   while(maxHeap.size()!=0)
   {
       int frequency= maxHeap.top().first;
       int element= maxHeap.top().second;
       
       for(int i=1;i<=frequency;i++)
       v.push_back(element);
       
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
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    vector<int> v = frequencySort(a,n);
	    for(int i=0;i<n;i++)
	    cout<<v[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}