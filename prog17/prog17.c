#include <stdio.h>
#include <stdlib.h>


int Inc(int a)
{
    return a + 1;
}

void Ins(int *x)
{
    if(x != NULL)
        *x = *x + 1;
}

int main(int argc, char const *argv[])
{
    int i = 7;
    i = Inc(i);
    Ins(NULL);
    printf("%d\n", i);
    return 0;
}
