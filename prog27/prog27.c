#include <stdio.h>
#include <stdlib.h>

typedef struct STest{
    int x,y;
    float f;
    char masStr[15];
} TTest;

int main(int argc, char const *argv[])
{
    FILE *f;
    TTest n = {10,20, 3.5, "hello world"};

    f = fopen("testStruct.txt", "w");
        fwrite(&n, 1, sizeof(n), f);
    fclose(f);


    TTest buf;
    f = fopen("testStruct.txt", "r");
        fread(&buf, 1, sizeof(buf), f);
    fclose(f);

    printf("%d  %d  %g  %s\n", buf.x, buf.y, buf.f, buf.masStr);
        









    /* int i = 7;
    int mas[10] = {1,2,3,4,5,6,7,8,9,10};
    f  = fopen("testbin.txt", "w");
    if (f == NULL)
        printf("File open Error");
    else
        {
            // fwrite(&i, 1, sizeof(i), f);
            fwrite(mas, 1, sizeof(mas), f);
        }
    fclose(f); */

    /* int buf;
    int bufMas[10];
    f = fopen("testbin.txt", "r");
    if(f == NULL)
        printf("File open Error");
    else
        {
            fread(&buf, 1, sizeof(buf), f);
            fread(bufMas, 1, sizeof(bufMas), f);
        }
    printf("%d\n", buf);
    fclose(f);
    for(int c = 0; c < 10; c++)
        printf("%d\n", bufMas[c]); */

    /* int buf;
    f = fopen("testbin.txt", "r");
    while (!feof(f))
    {
        if (fread(&buf, 1, sizeof(buf), f) > 0)
            printf("%d\n", buf);
    }
    fclose(f); */
    return 0;
}
