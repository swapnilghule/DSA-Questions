#include <bits/stdc++.h>
using namespace std;


int KthMaxed(int a[],int n,int k)
{
    sort(a,a+n, greater<int>());

    
    return a[k-1];
}

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        cin>>a[i];

        cin>>k;

        int element =KthMaxed(a,n,k);
        cout<<element;



        
    }
    return 0;
}