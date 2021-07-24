#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2){
        if(p1.second == p2.second)
                return p1.first<p2.first;
        return p1.second>p2.second;
    }


vector<int> frequencySort(vector<int>& nums) {
        vector<int> vec;
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++){      //unordermap for frequency counting
            um[nums[i]]++;
        }
        
        vector<pair<int,int> > freq_arr(um.begin(),um.end());
        sort(freq_arr.begin(),freq_arr.end(),compare);
        
        for(int i=0;i<freq_arr.size();i++){
            for(int j=0;j<freq_arr[i].second;j++){
                vec.push_back(freq_arr[i].first);
            }
        }
        
        
        
        return vec;
        
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
	    vector<int> a(n);
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    vector<int> v = frequencySort(a);
	    for(int i=0;i<n;i++)
	    cout<<v[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}