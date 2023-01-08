#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    
    FILE *f;
    f = fopen("prog29.txt","w+"); // ЛИТЕРАЛЫ (W+) ОЗНАЧАЕТ ЧТО В ФАЙЛ МОЖНО И ПИСАТЬ И ЧИТАТЬ ОДНОВРЕМЕННО
    // 
        printf("%d\n", ftell(f)); // ФУНКЦИЯ ПОЗИЦУЮ КУРСОРА (ЧИСЛО)
        fprintf(f, "hello world!!!\n");
        fseek(f, 1, SEEK_SET);  // МЕНЯЕТ ПОЗИЦИЮ КУРСОРА В ПЕРВЫЙ БАЙТ
        fprintf(f, "a");
        printf("%d\n", ftell(f));

        char c[100];
        fseek(f, 0, SEEK_SET);
        if(fgets(c, 100, f) != NULL) // FGETS() - ФУНКЦИЯ ЧИТАЕТ ИЗ ФАЙЛА
            printf(c);
    fclose(f);

    f = fopen("prog29.txt", "a"); // ЛИТЕРАЛЫ (A) ОЗНАЧАЕТ ЧТО В ФАЙЛ МОЖНО ДОПИСЫВАТЬ, КУРСОР УСТАНОВИТЬСЯ АВТОМАТИЧЕСКИ В КОНЕЦ СТРОКИ
        fprintf(f, "___Hi world___");
    fclose(f);

    return 0;
}
