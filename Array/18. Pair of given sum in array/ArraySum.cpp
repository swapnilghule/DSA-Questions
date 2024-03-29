// C++ implementation of simple method to find count of
// pairs with given sum.
#include <bits/stdc++.h>
using namespace std;

// Returns number of pairs in arr[0..n-1] with sum equal
// to 'sum'
int getPairsCount(int arr[], int n, int sum)
{
	map<int, int> m;

	// Store counts of all elements in map m
	for (int i = 0; i < n; i++)
		m[arr[i]]++;


    for (auto x : m)
      cout << x.first << " " << x.second << endl;

	int twice_count = 0;

	// iterate through each element and increment the
	// count (Notice that every pair is counted twice)
	for (int i = 0; i < n; i++) {
        
		twice_count += m[sum - arr[i]];
    cout<<"Iteration No."<<i<<"\n"<<"twice Count=== "<<twice_count<<"+="<<m[sum-arr[i]]<<"\n";
		bool b1=m[sum-arr[i]]  ? true:false;
        cout<<"\n B1=== "<<b1<<"\n";

    
  


		// if (arr[i], arr[i]) pair satisfies the condition,
		// then we need to ensure that the count is
		// decreased by one such that the (arr[i], arr[i])
		// pair is not considered

		bool b= (sum - arr[i] == arr[i]) ? true:false;
        cout<<b<<"\n";
    
           if (sum - arr[i] == arr[i])
			twice_count--;
	}

	// return the half of twice_count
	return twice_count / 2;
}

// Driver function to test the above function
int main()
{
	int arr[] = { 2, 3, 5, 6, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 6;
	cout << "Count of pairs is "
		<< getPairsCount(arr, n, sum);
	return 0;
}
