#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int max;
    int min;


};
struct Pair MaxMin(int a[],int n)
{
    struct Pair mm;
    // If only one element the push that element as min and max
    if(n==1)
    {
        mm.max=a[0];
        mm.min=a[0];
        return mm;
    }
   // If it has more than one element then initialize vlaue of min and max
    if(a[0]>a[1])
    {
        mm.max=a[0];
        mm.min=a[1];
    }
    else
    {
        mm.max=a[1];
        mm.min=a[0];
    }


    for(int i=2;i<=n-1;i++)
    {
        if(a[i]>mm.max)
        mm.max=a[i];
        else if(a[i]<mm.min)
        mm.min=a[i];
    }

    return mm;

}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];


    struct Pair minMax= MaxMin(arr,n);

    cout<<minMax.max<<" "<<minMax.min;

}