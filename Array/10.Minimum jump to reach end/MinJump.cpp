#include<bits/stdc++.h>
using namespace std;


int MinimumJump(int a[],int n)
{
    int step=a[0];
    int MaxReach=a[0];
    int jump=1;

    int Ma, Mn;

    if(n==1)
    return 0;
    else if(a[0]==0)
    return -1;
    else
    {
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
        return jump;
        else
        {
            MaxReach =max(MaxReach, i+a[i]);
            step--;
            if(step==0)
            {
                jump++;

                if(i >= MaxReach)
                return -1;

                step=MaxReach-i;
            }

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


        int MinJump= MinimumJump(a,n);

        cout<<MinJump;
    }
}