#include <iostream>
using namespace std;

/*
	Tìm số fibonacci thứ n (n <= 15)
	fibonacci(n) = fibonacci(n-1) + fibonacci(n-2) + fibonacci(n-3) + ... + fibonacci(1) + fibonacci(0)

	// phần cơ sở
	fibonacci(0) = 0
	fibonacci(1) = 1

	// phần đệ quy
	fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
	
	fibo(4) = fibo(3) + fibo(2) 
	fibo(3) = fibo(2) + fibo(1)
	fibo(2) = fibo(1) + fibo(0)
	fibo(1) = 1
	fibo(0) = 0

	fibo(0) = 0
	fibo(1) = 1
	fibo(2) = fibo(1) + fibo(0) = 1 + 0 = 1
	fibo(3) = fibo(2) + fibo(1) = 1 + 1 = 2
	fibo(4) = fibo(3) + fibo(2) = 2 + 1 = 3


	...
	
*/

int fibo(int n) {
	if(n == 0) return 0;
	if(n == 1) return 1;

	return fibo(n-1) + fibo(n-2);
}

// phá đệ quy
/*
	Time complexity: O(n)
	Space complexity: constant O(1)

*/
unsigned long long int fiboWithFor(unsigned long long int  n) {
	if(n == 0) return 0;
	if(n == 1) return 1;

	unsigned long long int  f0 = 0;  
	unsigned long long int  f1 = 1;	
	unsigned long long int  fn = 0; 

	for(unsigned long long int  i = 2; i <= n; i++) {
		fn = f0 + f1; // f2 = f1 + f0 
		f0 = f1; 
		f1 = fn; 	
	}
	return fn;
}

// memoization (backend)

int main() {
	cout << fibo(200) << endl;
}