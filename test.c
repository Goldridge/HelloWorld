#include <stdio.h>

int main(int argc, char **argv)
{
    if(arc < 2)
    {
       printf("Usage: %s  <argument>\n",  argv[0]);
       exit(-1);
    }
    printf("%s\n", *argv);
    return 0;
}
