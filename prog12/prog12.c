#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* #define cnt 5          ОПРЕДЕЛЕНИЕ МАКРОСА - КОНСТАНТА КОТОРАЯ ПРИНИМАЕТ ЗНАЧЕНИЕ СИМВОЛОВ
#define celoeI int i = cnt
#define showI printf("%d\n", i)

int main(int argc, char const *argv[])
{
    celoeI;
    showI;
    return 0;
} */

int main(int argc, char const *argv[])
{
    // КОНСТАНТА RAND_MAX ИМЕЕТ ЗНАЧЕНИЕ ОТ 0 ДО 32746
    srand(5);   // ОПРЕДЕЛЕНИЕ ПОСЛЕДОВАТЕЛЬНОСТИ СЕМЕНИ ДЛЯ RAND() РАВНАЯ 5, ПО УМОЛЧАНИЮ 1
    srand(time(NULL));  //  ОПРЕДЕЛЕНИЕ ПОСТОЯННО МЕНЯЮЩЕГОСЯ СЕМЕНИ ДЛЯ RAND()
    int i;
    i = rand();
    printf("%d\n", i % 18); // ГЕНЕРИРУЕТЬСЯ ЧИСЛО ДО 18, RAND_MAX % 18 - ГЕНЕРИРУЕТСЯ ЧИСЛО В ДИАПОЗОНЕ ОТ 0 ДО 17
    return 0;
}

