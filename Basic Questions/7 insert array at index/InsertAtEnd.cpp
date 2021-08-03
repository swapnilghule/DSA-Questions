/*insertion is a basic but frequently used operation. Arrays in most languages cannnot be dynamically shrinked or expanded. Here, we will work with such arrays and try to insert an element at some index.

You are given an array arr(0-based index). The size of the array is given by sizeOfArray. You need to insert an element at given index and print the modified array.

Example 1:

Input:
sizeOfArray = 6
arr[] = {1, 2, 3, 4, 5}
index = 5, element = 90
Output: 1 2 3 4 5 90
Explanation: 90 is inserted at index
5(0-based indexing). After inserting,
array elements are like
1, 2, 3, 4, 5, 90.

*/


// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    // You need to insert the given element at the given index. 
    // After inserting the elements at index, elements
    // from index onward should be shifted one position ahead
    // You may assume that the array already has sizeOfArray - 1
    // elements.
    void insertAtIndex(int a[], int sizeOfArray, int index, int element)
    {
        //Your code here
        
        for(int i=sizeOfArray-1;i>index;i--)
        {
            a[i]=a[i-1];
        }
        
        a[index]=element;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;//Input testcases
    while(t--)
    {
        
        int sizeOfArray; 
        
        //input size of Array
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        
        //input elements in the Array
        for(int i = 0; i < sizeOfArray-1; i++)
        cin>>arr[i];
        
        int index;
        //input index
        cin>>index;
        int element;
        //input element
        cin>>element;
        Solution obj;
        //calling insertAtIndex() function
        obj.insertAtIndex(arr, sizeOfArray, index, element); //Complete this function
        
        for(int i = 0; i < sizeOfArray; i++)//Printing the array for verification
        cout<<arr[i]<<" ";
        
        cout<<endl;
        
    }
    
	return 0;
}  // } Driver Code Ends