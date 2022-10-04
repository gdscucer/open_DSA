// C++ program to find GCD of two numbers
#include <iostream>
using namespace std;
// Function to return gcd of a and b
int gcd(int a, int b)
{
	int result = min(a, b); // Find Minimum of a nd b
	while (result > 0) {
		if (a % result == 0 && b % result == 0) {
			break;
		}
		result--;
	}
	return result; // return gcd of a nd b
}

// Driver program to test above function
int main()
{
	int a = 98, b = 56;
	cout << "GCD of " << a << " and " << b << " is "
		<< gcd(a, b);
	return 0;
}
