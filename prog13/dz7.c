#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ЗАДАНИЕ 1
struct sBox
{
    int a,b,c;
    char bName[50];
    char bColor[20];
} Box;

/* int main(int argc, char const *argv[])
{
    Box.a = 50;
    Box.b = 70;
    Box.c = 100;
    sprintf(Box.bName, "Good table");
    sprintf(Box.bColor, "White");
    printf("Structur Box: a = %d, b = %d, c = %d, BoxName = %s, BoxColor = %s\n", Box.a, Box.b, Box.c, Box.bName, Box.bColor);
    return 0;
} */

// ЗАДАНИЕ 2

typedef struct sBox tBox;

int main(int argc, char const *argv[])
{
    int i;
    tBox mas[3];
    mas[0].a = 20;
    mas[0].b = 50;
    mas[0].c = 40;
    sprintf(mas[0].bName, "Desk");
    sprintf(mas[0].bColor,"Black");

    mas[0].a = 20;
    mas[0].b = 50;
    mas[0].c = 40;
    sprintf(mas[0].bName, "Desk");
    sprintf(mas[0].bColor,"Black");

    mas[1].a = 600;
    mas[1].b = 800;
    mas[1].c = 450;
    sprintf(mas[1].bName, "Table");
    sprintf(mas[1].bColor,"White");
    
    mas[2].a = 20000;
    mas[2].b = 50000;
    mas[2].c = 40000;
    sprintf(mas[2].bName, "Window");
    sprintf(mas[2].bColor,"Yellow");

    for(i=0; i<3; i++)
    {
        printf("mas[%d].a = %d, mas[%d].b = %d, mas[%d].c = %d, mas[%d].bName = %s, mas[%d].bColor = %s\n", i,mas[i].a, i,mas[i].b, i, mas[i].c, i, mas[i].bName, i, mas[i].bColor);
    }
    return 0;
}