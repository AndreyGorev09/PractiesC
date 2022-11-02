#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int mas[10]; // ОПРЕДЕЛЕНИЕ МАССИВА
    mas[0] = 555;
    mas[1] = 111;
    mas[2] = 777;
    /* printf("%d\n", mas[0]);
    printf("%d\n", mas[1]);
    printf("%d\n", mas[2]); */
    int i;
    i = 0;
    while (i < 10)
    {
        printf("%d = %d\n", i, mas[i]);
        i = i + 1;
    }

    /* int i;
    i = 1;
    while (i <= 10)
    {
        printf("%d hello world\n", i);
        i = i + 1;
    }
    return 0; */
}
