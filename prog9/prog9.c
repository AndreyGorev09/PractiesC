#include <stdio.h>
#include <stdlib.h>

/* 
int main(int argc, char const *argv[])
{
    int a = 22;
    int b = 8;
    a+=1; 
    a*=5;
    a++;        // ОПЕРАТОР ИНКРИМЕНТА
    a--;        // ОПЕРАТОР ДИКРИМЕНТА
    a = b++;    // ПЕРВЫМ ВЫПОЛНЯЕТСЯ ПРИСВАЕВАНИЕ ПОСЛЕ УВЕЛИЧЕНИЕ НА 1;
    printf("%d  %d\n", a, b);
    a = ++b;    // ПЕВЫМ ВЫПОЛНЯЕТСЯ УВЕЛИЧЕНИЕ НА 1 ПОСЛЕ ПРИСВАЕВАНИЕ;
    printf("%d  %d\n", a, b);
    return 0;
} */

/* int main(int argc, char const *argv[])
{
    int a;
    do                              // ЦИКЛ WHILE С ПРЕДУСЛОВИЕМ;
    {
        printf("input integer: ");  // СНАЧАЛО ВЫПОЛНЯЕТСЯ ПЕРДУСЛОВИЕ
        scanf("%d", &a);
    }
    while (a != 7);  //  ПРОВЕРКА УСЛОВИЯ НА ИСТИННОСТЬ, ЦИКЛ ПРОДОЛЖИТЬСЯ ПОКА УСЛОВИЕ ЛОЖНО
    return 0;
} */

int main(int argc, char const *argv[])
{
    int a;
    for (a = 0; a < 10 ; a++)
        printf("%d\n",a);
    return 0;
}

