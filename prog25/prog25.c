#include <stdio.h>
#include <stdlib.h>


typedef int celoe, *iCeloe;
struct Mas
{
    int a;
    char c;
};

typedef struct Mas TypeMas, *PtRS;

int main(int argc, char const *argv[])
{
    struct Mas ic = {12, 'A'}; //  ИНИЦИАЛИЗАЦИЯ СТРУКТУРЫ
    TypeMas im = {14, 'B'};
    PtRS pTRC;
     printf("%d  %c\n", im.a, im.c);
    pTRC = &im;
    (*pTRC).a = 45;
    (*pTRC).c = 'H';
    printf("%d  %c\n", ic.a, ic.c);
    printf("%d  %c\n", im.a, im.c);
    pTRC -> a = 10; // ОПЕРАТОР СТРЕЛОЧКА СРАЗУ ПЕРЕХОДИТ ПО АДРЕСУ И ОБРАЩАЕТЬСЯ К ПОЛЮ СТРУКТУРЫ
    pTRC -> c = 'O'; // ОПЕРАТОР СТРЕЛОЧКА СРАЗУ ПЕРЕХОДИТ ПО АДРЕСУ И ОБРАЩАЕТЬСЯ К ПОЛЮ СТРУКТУРЫ
    printf("%d  %c\n", im.a, im.c);



    iCeloe iPtr; // УКАЗАТЕЛЬ КАК ТИП ДАННЫХ
    celoe i = 7;
    iPtr = &i;
    if (iPtr != NULL)
        *iPtr = 9;
        printf("%d\n", *iPtr); 



    
    int mas[] = {1,2,3,4,5,6,7,8,9,10}; //  ИНИЦИАЛИЗАЦИЯ МАССИВА
    int len = sizeof(mas) / sizeof(mas[0]); // ОПРЕДЕЛЕНИЕ ДЛИНЫ МАССИВА
    for(int i = 0; i<len; i++)
        printf("%d\t", mas[i]);
        printf("\n");

    

    TypeMas fi[] = {{12, 'f'}, {65, 'k'}}; //  ИНИЦИАЛИЗАЦИЯ МАССИВА
    int mlen = sizeof(fi)/sizeof(fi[0]); // ОПРЕДЕЛЕНИЕ ДЛИНЫ МАССИВА

    for (int i = 0; i<mlen; i++)
        printf("%d  %c\n", fi[i].a, fi[i].c);

    return 0;
}


