#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    for(int i = 0; i < argc; i++)
        printf("--- %s ---- \n", argv[0]); // ВЫВОДИТ ПЕРВЫЙ АРГУМЕНТ КОМАНДНОЙ СТРОКИ
    getchar(); // ОЖИДАЕТ ВВОДА С КЛАВИАТУРЫ "ENTER", ДЛЯ ЗАВЕРШЕНИЯ ПРОГРАММЫ
    return 0;
}