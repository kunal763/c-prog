// C++ program to find modular
// inverse of A under modulo M
#include <bits/stdc++.h>
using namespace std;
#define int long long

// A naive method to find modular
// multiplicative inverse of 'A'
// under modulo 'M'



// Driver code
signed main()
{
	int A = 60, M = 100000007;

	// Function call
	cout << modInverse(A, M);
	return 0;
}
