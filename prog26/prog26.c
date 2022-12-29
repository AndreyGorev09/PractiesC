#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    FILE *f;
    char strMas[1000];
    int a = 100;
    float s = 2.5;
    f = fopen("test.txt", "w");
    fprintf(f, "%s\n", "Hello world!!!");
    fprintf(f, "%s\n", "It`s test.txt file");
    fprintf(f, "%d\n", 100);
    fprintf(f, "%g\n", 2.5);
    fclose(f);



    f = fopen("test.txt", "r");
    /* fscanf(f, "%c", strMas);
    printf("%c\t", strMas[0]); // СЧИТЫВАЕТ СИМВОЛ И ЗАПИСЫВАЕТ ЕГО В МАССИВ */
    /* fscanf(f, "%s", strMas);
    printf("%s\n", strMas); // СЧИТЫВАЕТ СЛОВО ПОКА НЕ ВСТРЕТИТЬСЯ СИМВОЛ РАЗДЕЛИТЕТЬ(ТАБУЛЯЦИЯ,ПРОБЕЛ,КОНЕЦ СТОКИ,ПЕРЕВОД СТРОКИ) И ЗАПИСЫВАЕТ СЛОВО В МАССИВ */
    /* while (!feof(f))
    {
       if(fgets(strMas, 1000, f) != NULL)
            printf("%s", strMas);
    } */
    
    /* while (!feof(f))
    {
        fscanf(f, "%s\n", strMas); // if(fscanf(f, "%s\n", strMas) > 0) - ЧТОБЫ НЕ ПОВТОРЯЛАСЬ ПОСЛЕДНЕЕ СЛОВО
        printf("%s\n", strMas);
    } */

    if (f != NULL)
    {
        fscanf(f, "%d", &a);
        fscanf(f, "%g", &s);
        printf("%d  %g\n", a, s);
    }
    else
        printf("fopen Read Error!!!");
    fclose(f);

    return 0;
}
