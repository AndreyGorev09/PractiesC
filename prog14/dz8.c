#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ЗАДАНИЕ 1 
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    char str[21];
    str[20]='\0';
    for(int i=0; i < 20; i++)
        str[i] = rand() % 256;
    printf("%s\n", str);
    return 0;
}


// ЗАДАНИЕ 2 ЗАПОЛНИТЬ СТРОКУ СЛУЧАЙНЫМИ СИМВОЛАМИ ОТ a...z  кода по ascii(97...122)


/* int main(int argc, char const *argv[])
{
    srand(time(NULL));
    char str[21];
    str[20]='\0';
    int code, i;
    for(i=0;i<20;i++)
        str[i] = rand() % ('z'-'a'+1) + 'a';
    printf("%s\n", str);
    return 0;
} */




