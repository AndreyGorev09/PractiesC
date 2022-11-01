#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float a;
    float b;
    int n;
    printf("PROGRAMMA 'CALCULATOR'\n");
    printf("INPUT NUMERIC A: ");
    scanf("%g", &a);
    printf("INPUT NUMERIC B: ");
    scanf("%g", &b);
    printf("INPUT NUMBER FOR OPERATOR: '1' - substraction, '2' - addition, '3' - multiplication, '4' - division: ");
    scanf("%d",&n);
    if (n == 1)
        {
            printf("%g - %g = %g\n", a, b, a - b);
        }
    if (n == 2)
        {
            printf("%g + %g = %g\n", a, b, a + b);
        }
    if (n == 3)
        {
            printf("%g * %g = %g\n", a, b, a * b);
        }
    if (n == 4)
        {
            printf("%g / %g = %g\n", a, b, a / b);
        }
    return 0;
}
