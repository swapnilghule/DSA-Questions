// { Driver Code Starts
// Program to find maximum guest at any time in a party
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	public:
	vector<int> findMaxGuests(int Entry[], int Exit[], int N)
	{
	   // Your code goes here
	   vector <int>v;
	   int i=1,j=0;
	   sort(Entry,Entry+N);  // sort the both Array
	   sort(Exit,Exit+N);
	   
	   int guest_in_party=1, max_guest_at_same_time=1, time1=Entry[0];
	   while(i < N && j< N)
	   {
	       if(Entry[i] <= Exit[j])       // check whether Arrival of intervals is less than previous time 
	       {
	           guest_in_party++;                      
	           if(guest_in_party > max_guest_at_same_time)
	           {
	               max_guest_at_same_time = guest_in_party;    // store max guest and time 
	               time1=Entry[i];
	           }
	           
	           i++;             // check for the another guest arrive at same time or not
	       }
	       else
	       {
	           guest_in_party--;    // if guest exit
	           j++;                 // check for next guest
	       }
	   }
	   
	   
	   v.push_back(max_guest_at_same_time);
	   v.push_back(time1);
	   
	   return v;
	   
	   
	   
	   
	   
	   
	   
	   
	}

};

// { Driver Code Starts.

 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int entry[n],exit1[n];
        for(i=0;i<n;i++)
        cin>>entry[i];
        for(i=0;i<n;i++)
        cin>>exit1[i];
        Solution obj;

	    vector<int> p = obj.findMaxGuests(entry, exit1, n);
	    cout<<p[0]<<' '<<p[1];
	    cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends