#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// ЗАДАНИЕ 1 СОЗДАТЬ МАКРОС = 10 И ОТОБРАЗИТЬ ЕГО ЧЕРЕЗ PRINTF(). ОТОБРАЗИТЬ ПОСЛЕДОВАТЕЛЬНОСТЬ ЧЕРЕЗ FOR ОТ 1..10 ИСПОЛЬЗУЯ МАКРОС.
/* #define consI int i = 10
int main(int argc, char const *argv[])
{   
    consI;
    int mas[i];
    for(i=1; i<11; i++)
    {
        mas[i]=i;
        printf("%d\n", mas[i]);
    }
    return 0;
}
 */

// ЗАДАНИЕ 2 СОЗДАТЬ ПЕРЕМЕННУЮ ЦЕЛОГО ТИПА И ЗАПОЛНИТЬ ЕГО РАНДОМНЫМ ЧИСЛОМ В ДИАПОЗОНЕ ОТ 10 ДО 19
/* int main(int argc, char const *argv[])
{
    int i;
    srand(time(NULL));
    i = rand();
    i%=20;
    if ((i > 9) && (i < 20))
        printf("%d\n", i);
    else printf("variabl 'i' not difined\n");
    return 0;
} */

// ЗАПОЛНИТЬ МАССИВ ИЗ ЗАДАНИЯ 1 СЛУЧАЙНЫМИ ЧИСЛАМИ ОТ 20 ДО 39 ВКЛЮЧИТЕЛЬНО

#define consI int i = 10


int main(int argc, char const *argv[])
{
    srand(time(NULL));
    consI;
    int mas[i];
    int s;
    for(i;i > 0;i--)
    {
        s = rand();
        s%=40;
        if((19<s)&&(s<40))
        {
            mas[i]=s;
            printf("%d\n", mas[i]);
        }
    }   
    return 0;
}

