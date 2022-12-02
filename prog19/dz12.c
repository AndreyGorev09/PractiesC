#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    void *def; // НЕ ТИПИЗИРОВАННЫЙ УКАЗАТЕЛЬ
    int *i = NULL; // ТИПИЗИРОВАННЫЙ УКАЗАТЕЛЬ
    float *f = NULL;
    char *c = NULL;
    i = malloc(sizeof(int));
    f = malloc(sizeof(float));
    c = malloc(sizeof(char));
    *i = 56;
    *f = 23.45;
    *c = 's';
    if ((*i || *f || *c) != NULL)
    {
        printf("i = %d, f = %g, char = %c\n", *i, *f, *c);
    }
    free(i);
    free(f);
    free(c);
    i = NULL;
    f = NULL;
    c = NULL;
    return 0;
}
