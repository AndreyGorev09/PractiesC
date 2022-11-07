#include <stdio.h>
#include <stdlib.h>


// НАПИСАТЬ ПРОГРАММУ КОТОРАЯ СОДЕРЖИТ МАТРИЦУ ТАБЛИЦЫ УМНАЖЕНИЯ ОТ 1 ДО 9
/* int main(int argc, char const *argv[])
{
    int m[10][10];
    int a, b;
    for(a = 1; a < 10; a++)
    {   
        for(b = 1; b < 10; b++)
        {
            m[a][b] = a * b;
            printf("%d\t", m[a][b]);
        }
        printf("\n");
    }
    return 0;
} */

// ИЗМЕНИТЬ ПРОГРАММУ ТАК ЧТОБЫ ВЕСЬ ТРЕТИЙ СТОЛБЕЦ СОДЕРЖАЛ 3

int main(int argc, char const *argv[])
{
    int m[10][10];
    int a, b;
    for(a = 1; a < 10; a++)
    {
        for(b = 1; b < 10; b++)
        {
            if(b == 3)
            {
                m[a][b] = 3;
                printf("%d\t", m[a][b]);
            }
            else
                {
                    m[a][b] = a * b;
                    printf("%d\t", m[a][b]);
                }
        }
        printf("\n");
    }
    return 0;
}
