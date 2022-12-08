#include <stdio.h>
#include <stdlib.h>

void CreateInt(int **p)
{
    *p = malloc(sizeof(int));
}

void DelInt(int **p)
{
    free(*p);
    *p = NULL;
}

int main(int argc, char const *argv[])
{
    int *a = NULL;
    CreateInt(&a);
    if(a != NULL)
        *a = 4545;
        printf("%d\n", *a);
    DelInt(&a);
    if(a == NULL)
        printf("OK\n");
    return 0;
}
