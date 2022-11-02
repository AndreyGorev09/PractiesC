#include <stdio.h>
#include <stdlib.h>

// ЗАДАНИЯ 1 И 2

int func()
{
    int mas[10];
    int i;
    i = 0;
    while (i < 9)
    {
        if (i > 4)
            {
                mas[i] = i * i;
                printf("%d = %d\n", i, mas[i]);
            }
        else
            {
                mas[i] = 7;
                printf("%d = %d\n", i, mas[i]);
            }
        i = i + 1;
    }
}



int main(int argc, char const *argv[])
{
    func();
    return 0;
}
