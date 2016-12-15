#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
	if (n == 1)
		return 1;
	return n*fib(n-1);
}

int main(int argc, char **argv)
{
	int k;

    if(argc < 2)
    {
       printf("Usage: %s  <argument>\n",  argv[0]);
       exit(-1);
    }

    k=atoi(argv[1]);
    printf("---------------------------------\n");
    printf("  Fibonaci(%d)=%d\n", k, fib(k));
    printf("---------------------------------\n");

    return 0;
}
