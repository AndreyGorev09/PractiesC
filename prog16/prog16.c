#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i = 5;
    int *iPtr = NULL;
    iPtr = &i;
    *iPtr = 2;
    if(*iPtr != NULL)
        *iPtr = 7;
        printf("%d\n", *iPtr);
    return 0;
}
