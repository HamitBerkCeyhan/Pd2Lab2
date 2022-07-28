#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
	if(n==1)
	{
		return n;
	}
	else
	{
		return (n+ f(n-1));
	}
}

int main(void)
{
	int x=10;
	f(x);
	printf("Result: %d", f(x));
	return 0;
}

