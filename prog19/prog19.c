#include <stdio.h>
#include <stdlib.h>

/* int main(int argc, char const *argv[])
{
    int x;
    x = sizeof(double);
    printf("%d\n", x);
    int c;
    c = sizeof(char);
    printf("%d\n", c);
    int s;
    double w;
    s = sizeof(w);
    printf("%d\n", s);
    int t;
    char *y;
    t = sizeof(*y);
    printf("%d\n", t);
    return 0;
}
 */

int main(int argc, char const *argv[])
{
    int *x = NULL;
    x = malloc(sizeof(int));
    if(x != NULL)
    {
        *x = 333;
        printf("%d\n", *x);
    }
    free(x);
    x = NULL;
    return 0;
}
