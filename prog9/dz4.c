#include <stdio.h>
#include <stdlib.h>

// ЗАДАНИЕ 1: СОЗДАТЬ ЦИКЛЫ WHILE, DO WHILE, FOR 

// ЦИКЛ FOR:
/* int main(int argc, char const *argv[])
{
    int a;
    for(a = 2;a < 20; a++)
        if (a%2==0)
            {    
                printf("%d\n", a);
            }
    return 0;
}
 */

// ЦИКЛ WHILE:
/* int main(int argc, char const *argv[])
{
    int a = 2;
    while (a < 20)
    {
        if (a%2==0)
            {
                printf("%d\n", a); 
            }
        a++;
    }
    return 0;
} */

//ЦИКЛ DO WHILE:
/* int main(int argc, char const *argv[])
{
    int a = 2;
    do
    {
        if (a % 2 == 0)
            {
                printf("%d\n", a);
            }
        a++;
    }
    while(a < 20);
    return 0;
} */


//  ЗАДАНИЕ 2: СОЗДАТЬ СТРОКУ И ЗАПОЛНИТЬ ЕЕ ЦИКЛОМ

/* int main(int argc, char const *argv[])
{
    char str[8];
    int a;
    for(a = 0; a < 8; str[a] = '#', a++);
    printf("%s\n", str);
    return 0;
} */

//  ЗАДАНИЕ 3: ОТОБРАЗИТЬ ПОСИМВОЛЬНО СТРОКИ С ПРЕДИДУЩЕГО ЗАДАНИЯ


int main(int argc, char const *argv[])
{
    char str[9];
    int a;
    for(a = 0; a < 9; str[a]='#', a++)
        printf("%s\n", str);
    return 0;
}