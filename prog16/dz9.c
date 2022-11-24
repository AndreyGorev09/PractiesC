#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    float a = 6.8;
    float b = 5.5;
    float *fTpr = NULL;
    fTpr = &a;
    if(*fTpr == a)
        *fTpr = 9.9;
    fTpr = &b;
    if(*fTpr == b)
        *fTpr = 2.2;
    printf("a = %g, b = %g\n",a,b);
    return 0;
}
