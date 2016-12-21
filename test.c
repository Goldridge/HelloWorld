#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
	if (n==1)
		return 1;
	return n*fib(n-1);
}

int main(int argc, char **argv)
{
    if(argc < 2)
    {
       printf("Usage: %s  <argument>\n",  argv[0]);
       exit(-1);
    }

    int n = atoi(argv[1]);

    printf("fib(%d) = %d\n", n, fib(n));
    return 0;
}
