#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* unsigned int a = 12; // ПРИСВАЕНИЕ ЧИСЛА - 12, В ДЕСЯТИЧНОЙ СИСТЕМЕ СЧИСЛЕНИЯ
    printf("%d\n", a);

    unsigned int c = 014; // ПРИСВАЕНИЕ ЧИСЛА - 12, В ВОСМИРИЧНОЙ СИСТЕМЕ СЧИСЛЕНИЯ
    printf("%d\n", c);

    unsigned int h = 0xC; // ПРИСВАЕНИЕ ЧИСЛА - 12, В ШЕСТНАДЦАТИРИЧНОЙ СИСТЕМЕ СЧИСЛЕНИЯ
    printf("%d\n",h );

    unsigned int b = 0b1100; // ПРИСВАЕНИЕ ЧИСЛА - 12, В ДВОИЧНОЙ СИСТЕМЕ СЧИСЛЕНИЯ
    printf("%d\n", b); */

    unsigned int a = 0b1100; // ПРИСВАЕНИЕ ПЕРЕМЕННОЙ В ДВОИЧНОЙ СИСТЕМЕ СЧИСЛЕНИЯ
    printf("%o\n", a); // ОТОБРАЖЕНИЕ ПЕРЕМЕННОЙ В ВОСМЕРИЧНОЙ СИСТЕМЕ СЧИСЛЕНИЯ РАВНАЯ ЧИСЛУ 14
    printf("%d\n", a); // ОТОБРАЖЕНИЕ ПЕРЕМЕННОЙ В ДЕСЯТИЧНОЙ СИСТЕМЕ СЧИСЛЕНИЯ РАВНАЯ ЧИСЛУ 12
    printf("%x\n", a); // ОТОБРАЖЕНИЕ ПЕРЕМЕННОЙ В ШЕСТНАДЦАТИРИЧНОЙ СИСТЕМЕ СЧИСЛЕНИЯ РАВНАЯ ЧИСЛУ "C"

    unsigned int d = ~0b1100; // ИНВЕРСИЯ
    d = d & 0b1100; // ОПЕРАЦИЯ "И"
    d = d | 0b1100; // ОПЕРАЦИЯ "ИЛИ"
    d = d ^ 0b1100; // ОПЕРАЦИЯ "ИСКЛЮЧАЮЩЕЕ ИЛИ" 
    d = d << 2; // СДВИГ ВЛЕВО НА ДВА РАЗРЯДА
    d = d >> 2; // СДВИГ ВПРАВО НА ДВА РАЗРЯДА
    return 0;
}