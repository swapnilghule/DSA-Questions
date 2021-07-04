#include<bits/stdc++.h>
using namespace std;


int MaxprofitBuyAndSell(int a[],int n)
{
    int min_cost=INT_MAX;
    int MaxProfit=0;

    for(int i=0;i<n;i++)
    {

        min_cost =min(min_cost,a[i]);
        MaxProfit =max(MaxProfit,a[i]-min_cost);

    }

    return MaxProfit;
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

        int Maxprofit= MaxprofitBuyAndSell(a,n);
        cout<<Maxprofit<<" ";
    }
    return 0;
}