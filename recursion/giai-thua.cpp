#include <iostream>
using namespace std;

/*
	Cho số tự nhiên n( n <= 15). Tính n!

	n! = 1 * 2 * 3 * ... * n = n * (n-1) * (n-2) * ... * 1 = n * (n-1)!

	n = 2 => 2! = 2 * (2-1)! = 2 * 1! = 2 * 1 * 0! = 2
*/

int factorial(int n) {
	if(n < 0) return -1;
	// phần cơ sở
	if(n == 0) return 1;

	// phần đệ quy
	return n * factorial(n-1); // n * (n-1)!
	// ==> 6
	// n = 3; return 3 * 2
	// n = 2; return 2 * 1
	// n = 1; return 1 * 1
	// n = 0; return 1
}

// phá đệ quy
int factorialWithFor(int n) {
	if(!(n <= 15 && n >= 0)) return -1;
	if(n == 0) return 1;
	int result = 1;
	for(int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main() {
	cout << factorial(3) << endl;
	cout << factorial(4) << endl;
	return 0;
}