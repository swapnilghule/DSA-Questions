#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void swap(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    
    
    int partition_r(int arr[], int low,int high)
    {
      srand(time(NULL));
      int random =low + rand() % (high-low);
      swap(&arr[random],&arr[low]);
      return partition(arr,low,high);
    }
    
    void quickSort(int arr[], int low, int high)
    {
        // code here
       
        
        if(low<high)
        {
            int pi=partition_r(arr,low,high);
            quickSort(arr,low,pi-1);
            quickSort(arr,pi+1,high);
        }
        
    }
    
    public:
    int partition (int a[], int low, int high)
    {
       // Your code here
        
        int pivot=a[low];
        int i=low,j;
        for(j=low+1;j<=high;j++)
        {
            if(a[j] <= pivot)
            {
                i++;
                swap(&a[i],&a[j]);
            }
        }
        
        swap(&a[i],&a[low]);
        return i;
        
        
        
    }
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends