#include <stdio.h>
#include <stdlib.h>

enum Color { clGreen, clRed, clBlue } clr; // ОБЪЯВЛЕНИЕ ТИПА ДАННЫХ ПЕРЕЧИСЛЕНИЯ, ЭТО СИМВОЛИЧЕСКОЕ ИМЯ КОТОРОЕ ИМЕЕТ РЕАЛЬНОЕ ЦЕЛОЧИСЛЕННОЕ ЗНАЧЕНИЕ

int main(int argc, char const *argv[])
{
    printf("%d - clGreen, %d - clRed, %d - clBlue\n", clGreen, clRed, clBlue); // КАЖДОЕ СИМВОЛИЧЕСКОЕ ИМЯ ИМЕЕТ СВОЕ ЦЕЛОЧИСЛЕННОЕ ЗНАЧЕНИЕ
    enum Color { clGreen = 3, clRed, clBlue = 8 }; // УСТАНОВКА КАЖДОМУ СИМВОЛИЧЕСКОМУ ИМЕНИ ЗНАЧЕНИЕ В РУЧНУЮ, ЕСЛИ ЗНАЧЕНИЕ НЕ ПРОСТАВЛЕННО БУДЕТ ВЗЯТО ЗНАЧЕНИЕ ПРЕДИДУЩЕГО ИМЕНИ + 1
    printf("%d - clGreen, %d - clRed, %d - clBlue\n", clGreen, clRed, clBlue); // КАЖДОЕ СИМВОЛИЧЕСКОЕ ИМЯ ИМЕЕТ СВОЕ ЦЕЛОЧИСЛЕННОЕ ЗНАЧЕНИЕ(ПРИСВОЕНИЕ В РУЧНУЮ)

    enum MyChar { MC_BIG_A = 'A', MC_BIG_B = 'B', MC_BIG_C = 'C'};

    printf("%d - MC_BIG_A, %d - MC_BIG_B, %c - MC_BIG_C\n", MC_BIG_A, MC_BIG_B, MC_BIG_C);

    clr = clGreen; // ПРИСВОЕНИЕ ПЕРЕМЕННОЙ ПЕРЕЧИСЛЕНИЮ
    printf("%ld\n", sizeof(clr)); // РАЗМЕР ПЕРЕМЕННОЙ ПЕРЧИСЛЕНИЯ РАВЕН 4 БАЙТА
    if (clr == clGreen) // СРАВНЕНИЕ ПЕРЕМЕННОЙ С УСЛОВНЫМ ЗНАЧЕНИЕМ
        printf("Green\n");
    else if (clr == clRed)
        printf("Red\n");
    else if (clr == clBlue)
        printf("Blue\n");
    return 0;
}