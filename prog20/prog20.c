#include <stdio.h>
#include <stdlib.h>


/* int main(int argc, char const *argv[])
{
    int *mas = NULL;
    mas = malloc(sizeof(int) * 2); // ДИНАМИЧЕСКИЕ МАССИВЫ, ФУНКЦИЯ MALLOC - ВОЗВРАЩАЕТ АДРЕС ЯЧЕЙКИ ПАМЯТИ 
    //int mas[2];  СТАТИЧЕСКИЕ МАССИВЫ
    // mas[0] = 333;
    // mas[1] = 555; 
    *mas = 444;
    *(mas+1) = 666;
    // free(mas); ОЧИЩАЕМ ЗНАЧЕНИЕ МАССИВА

    mas = realloc(mas, sizeof(int) * 5); 
    // ФУНКЦИЯ REALLOC - КОПИРУЕТ СТАРЫЕ ЗНАЧЕНИЯ МАССИВА И ПЕРЕЗАПИСЫВАЕТ ИХ ПО НОВОМУ ВЫДЕЛЕННОМУ АДРЕСУ. 
    // ВЫДЕЛЯЕМ НОВЫЙ АДРЕС И РАЗМЕР МАССИВА, ЗНАЧЕНИЯ СТАРОГО МАССИВА ПО ЭТОМУ АДРЕСУ НЕ СОХРАНЯЮТСЯ 


    printf("mas[0] = %d, mas[1] = %d\n",mas[0], mas[1]);
    free(mas);
    mas = NULL;
    return 0;
} */

int main(int argc, char const *argv[])
{
    char *mas; // int *mas
    int end = 4;
    mas = malloc(sizeof(char) * end); // mas = malloc(sizeof(int) * end);
    for(int i=0; i<end; i++)
    {
        mas[i] = 123;
        printf("%d\n", mas+i); // ТИП INT = 4 БАЙТА, ТИП CHAR = 1 БАЙТ. ВЫВОДИМ АДРЕСА ЗНАЧЕНИЙ МАССИВА, МОЖНО ТАКЖЕ ВЫВЕСТИ ТАК: &mas[i] ИЛИ &*(mas+i)
    }
    free(mas);
    mas=NULL;
    return 0;
}
