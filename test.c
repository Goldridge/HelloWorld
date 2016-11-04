#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc < 2)
    {
       printf("Usage: %s  <argument>\n",  argv[0]);
       exit(-1);
    }
    printf("%s %s\n", *argv, *argv[2]);
    return 0;
}
