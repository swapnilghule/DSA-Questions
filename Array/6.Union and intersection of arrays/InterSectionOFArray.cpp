#include<bits/stdc++.h>
using namespace std;


int InterSectionOfArray(int a[],int n,int b[],int m)
{
  sort(a,a+n);
  sort(b,b+m);

  int i = 0, j = 0;
  int ans=0;
    while (i < n && j < m) {
        if (a[i] > b[j]) {
            j++;
        }
        else if (b[j] > a[i]) {
            i++;
        }
        else {
             
            // when both are equal
           ans++;
            i++;
            j++;
        }
    }
  return ans;
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


        int Count= InterSectionOfArray(a,n,b,m);
        cout<<Count;

        return 0;
    }
}