#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc < 2)
    {
       printf("Usage: %s  <argument>\n",  argv[0]);
       exit(-1);
    }
    printf("%s\n", *argv);
    return 0;
}
