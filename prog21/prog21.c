#include <stdio.h>
#include <stdlib.h>

/* int main(int argc, char const *argv[])
{
    int k = 777;
    int *p = NULL;
    p = &k;
    *p = 333; 
    int **p2; //СОЗДАЕМ ВТОРОЙ УКАЗАТЕЛЬ НА ПЕРВЫЙ УКАЗАТЕЛЬ
    p2 = &p; // ПЕРЕДАЕМ АРДЕС ПЕРВОГО УКАЗАТЕЛЯ ВО ВТОРОЙ УКАЗАТЕЛЬ
    **p2 = 111; // ИЗМЕНЯЕ ПЕРЕМЕННУЮ k ПРИПОМОЩИ ВТОРОГО УКАЗАТЕЛЯ
    int ***p3; //СОЗДАЕМ ТРЕТИЙ УКАЗАТЕЛЬ НА ВТОРОЙ УКАЗАТЕЛЬ
    p3 = &p2; // ПЕРЕДАЕМ АРДЕС ВТОРОГО УКАЗАТЕЛЯ В ТРЕТИЙ УКАЗАТЕЛЬ
    ***p3 = 999; // ИЗМЕНЯЕ ПЕРЕМЕННУЮ k ПРИПОМОЩИ ТРЕТЬЕГО УКАЗАТЕЛЯ
    printf("%d\n", k);

    return 0;
}
 */

void CreateInt(int **p)
{
    *p = malloc(sizeof(int));
}

int main(int argc, char const *argv[])
{
    int *a = NULL;
    CreateInt(&a);
    if(a != NULL)
        *a = 777;
        printf("%d\n", *a);
    free(a);
    a = NULL;

    return 0;
}
