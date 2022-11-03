#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    char ch;                    // ОПРЕДЕЛЕНИЕ СТРОКОВОЙ ПЕРЕМЕННОЙ
    printf("input char: ");
    scanf("%c", &ch);           // ВЗЯТИЕ ЗНАЧЕНИЯ ДЛЯ ПЕРЕМЕННОЙ
    printf("char = %c\n", ch);

    char s[10] = "werwwrfe";     // СТРОКОВЫЙ МАССИВ
    s[0] = '7';                 // ИНИЦИАЛИЗАЦИЯ ЗНАЧЕНИЯ ДЛЯ МАССИВА
    printf("%s\n", s);
    sprintf(s, "123456789");    // ПЕРЕДАЧА ЗНАЧЕНИЙ В МАССИВ
    s[4] = '\0';                // КОНЕЦ СТРОКИ ПОСЛЕ 4-ГО СИМВОЛА В МАССИВЕ
    printf("%s\n", s);

    return 0;
}
