#include<bits/stdc++.h>
using namespace std;


int UnionOFarray(int a[],int n,int b[],int m)
{
    set<int> s;

    for(int i=0;i<n;i++)
    s.insert(a[i]);


    for(int i=0;i<m;i++)
    s.insert(b[i]);


    return s.size();
}


int main()
{
    int t,n,m;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];

        for(int i=0;i<n;i++)
        cin>>a[i];


        for(int i=0;i<m;i++)
        cin>>b[i];


        int Count= UnionOFarray(a,n,b,m);
        cout<<Count;

        return 0;
    }
}