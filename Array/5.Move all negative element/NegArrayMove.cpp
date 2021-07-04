#include<bits/stdc++.h>
using namespace std;


void NegativeMove(int a[],int n)
{

 int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<n)
        {
            if(i!=j)
            {
                swap(a[i],a[j]);
                j++;
            }
        }
    }
}

int main()
{ 
    int t,n;
    cin>>t;

    while(t--)
    {
          cin>>n;
          int a[n];
          for(int i=0;i<n;i++)
          cin>>a[i];

          NegativeMove(a,n);

          for(int i=0;i<n;i++)
          cout<<a[i]<<" ";

    }
}