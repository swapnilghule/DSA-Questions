#include<bits/stdc++.h>
using namespace std;



int MaximumContArraySum(int a[],int n)
{
    int Maximum_Array_end=0;                      // to store the value of element which is Greater than its left side
    int Maximum_so_far_subarray=INT_MIN;          // to store maximum sum of array so far

    for(int i=0;i<n;i++)
    {
        Maximum_Array_end= Maximum_Array_end +a[i];      // store contigious sum array value

        if(Maximum_Array_end < a[i])                    //check whether current element is greater than stored contigous sub array
        Maximum_Array_end=a[i];


        if(Maximum_Array_end > Maximum_so_far_subarray)   // check sub array sum in each and every iteration
        Maximum_so_far_subarray=Maximum_Array_end;
    }

    return Maximum_so_far_subarray;
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

      int Sum=   MaximumContArraySum(a,n);

        cout<<Sum;
    }
    return 0;
}