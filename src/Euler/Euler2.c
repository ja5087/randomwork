#include <stdio.h>
int fib = 0, fib2 = 1, index1 = 0, sum = 0, i, n = 5;

int main()
{
	for(fib2 = 1; fib2 < 4000000;)
	{
	index1 = fib + fib2;
	fib = fib2;
	fib2 = index1;
	if(fib2%2 == 0)
	{
		sum += fib2;
	}
	
	}
	
	printf("%d\n", sum);
	getchar();
	return 0;
}

