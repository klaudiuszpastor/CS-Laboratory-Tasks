#include "fib.h"

int fibonacci(unsigned int n) {
	if (n <= 2) // pierwsze dwa wyrazy 0 i 1 //więc n<=1
		return n; // lub return 1;
	else
		return fibonacci(n - 2) + fibonacci(n - 1); 
}



	/*int fibonacci(unsigned int n) {
		if (n <= 1)
			return n;

		int a = 0, b = 1;
		for (unsigned int i = 2; i <= n; ++i) {
			int temp = b;
			b = a + b;
			a = temp;
		}
		return b;
	}*/
