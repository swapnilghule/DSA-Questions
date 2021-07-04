// C++ program to compute factorial of big numbers
#include<iostream>
using namespace std;

// Maximum number of digits in output
#define MAX 500

int multiply(int x, int res[], int res_size);

// This function finds factorial of large numbers
// and prints them
void factorial(int n)
{
	int res[MAX];

	// Initialize result
	res[0] = 1;
	int res_size = 1;

	// Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
	for (int x=2; x<=n; x++)
    {
        cout<<"\ni= "<<x<<"\n";
		res_size = multiply(x, res, res_size);
    }

	cout << "Factorial of given number is \n";
	for (int i=res_size-1; i>=0; i--)
		cout << res[i];
}

// This function multiplies x with the number
// represented by res[].
// res_size is size of res[] or number of digits in the
// number represented by res[]. This function uses simple
// school mathematics for multiplication.
// This function may value of res_size and returns the
// new value of res_size
int multiply(int x, int res[], int res_size)
{
	int carry = 0; // Initialize carry

	// One by one multiply n with individual digits of res[]
	for (int i=0; i<res_size; i++)
	{
		int prod = res[i] * x + carry;
        cout<<"\nproduct= "<<prod<<"\n";

		// Store last digit of 'prod' in res[]
		res[i] = prod % 10;
       cout<<"\nres[i]= "<<res[i]<<"\n";


		// Put rest in carry
		carry = prod/10;
        cout<<"\ncarry= "<<carry<<"\n";
	}

	// Put carry in res and increase result size
	while (carry)
	{
        cout<<"\n Inside while loop\n";
		res[res_size] = carry%10;
        cout<<"\nres[res_size]="<<res[res_size]<<"\n";
		carry = carry/10;
        cout<<"\nNew carry="<<carry<<"\n";
		res_size++;
	}
	return res_size;
}

// Driver program
int main()
{
	factorial(5);
	return 0;
}
