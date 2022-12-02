#include <stdio.h>
#include <stdlib.h>

void Sert(int *x, int *y)
{
    int invert;
    if((*x && *y) != NULL)
        (*x)++;
        *y *= 2;
        invert = *x;
        *x = *y;
        *y = invert;

}


int main(int argc, char const *argv[])
{
    int num1 = 56;
    int num2 = 43;
    printf("num1 = %d, num2 = %d\n", num1, num2);
    Sert(&num1, &num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}





