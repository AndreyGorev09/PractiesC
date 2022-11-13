#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/* 
int main(int argc, char const *argv[])
{
    int i = 7;
    float f;
    f = i;
    printf("%f\n", (float)i); // ЯВНОЕ ПРИВЕДЕНИЕ ЦЕЛОГО ЧИСЛА INT В ВЕЩЕСТВЕННОЕ FLOAT
    printf("%f\n", f); // НЕЯВНОЕ ПРЕОБРАЗОВАНИЕ ЦЕЛОГО ЧИСЛА INT В ВЕЩЕСТВЕННОЕ FLOAT
    return 0;
} */


/* int main(int argc, char const *argv[])
{
    float f = 2.5;
    int i;
    i = f;
    printf("%d\n", (int)f); // ЯВНОЕ ПРЕОБРАЗОВАНИЕ ВЕЩЕСТВЕННОГО ТИПА FLOAT К ЦЕЛОМУ INT, INT ОТСЕКАЕТ ВЕЩЕСТВЕННОЕ ЗНАЧЕНИЕ
    printf("%d\n", i); // НЕЯВНОЕ ПРЕОБРАЗОВАНИЕ ВЕЩЕСТВЕННОГО ТИПА FLOAT К ЦЕЛОМУ INT, INT ОТСЕКАЕТ ВЕЩЕСТВЕННОЕ ЗНАЧЕНИЕ
    return 0;
} */

/* int main(int argc, char const *argv[])
{
    int i = 125;
    char c[50];
    sprintf(c, "%i", i); // ПРЕОБРАЗОВАНИЯ ЦЕЛОГО ЧИСЛА INT В СТРОКУ CHAR
    printf("%s\n", c);
    itoa(i, c, 10); // ПРЕОБРАЗОВАНИЯ ЦЕЛОГО ЧИСЛА INT В СТРОКУ CHAR ПРИ ПОМОЩИ ФУНКЦИИ ITOA(ЧИСЛО, СТРОКА, СИСТЕМА СЧИСЛЕНИЯ)
    printf("%s\n", c);
    return 0;
} */

/* int main(int argc, char const *argv[])
{
    int i;
    char c[50] = "534";
    i = atoi(c); // ПРЕОБРАЗОВАНИЯ СТРОКИ CHAR В ЦЕЛОЕ ЧИСЛО INT ПРИ ПОМОЩИ ФУНКЦИИ ATOI(СТРОКА)
    printf("%d\n", i);
    return 0;
} */


/* int main(int argc, char const *argv[])
{
    float f;
    char c[50] = "534.345";
    f = atof(c); // ПРЕОБРАЗОВАНИЯ СТРОКИ CHAR В ВЕЩЕСТВЕННОЕ ЧИСЛО FLOAT ПРИ ПОМОЩИ ФУНКЦИИ ATOF(СТРОКА)
    printf("%g\n", f);
    printf("%f\n", f);
    return 0;
}  */

int main(int argc, char const *argv[])
{
    int i = 100;
    char c = 'd';
    printf("%d\n", c);  // ПРЕОБРАЗОВАНИЕ СИМВОЛА -D В КОД ASCII - 100 
    printf("%c\n", i); //ПРЕОБРАЗОВАНИЕ КОДА ASCII - 100 В СИМВОЛ - D
    return 0;
}



