#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int end = 10;
    int *mas = NULL;
    mas = malloc(sizeof(int) * 10);
    for(int i=0; i<10; i++)
    {
        *(mas+i) = i;
        printf("%d\n", mas[i]);
    }
    mas = realloc(mas, sizeof(int) * end + 4);
    for(int i=10; i<14; i++)
    {
        *(mas+i) = i;
        printf("%d\n", mas[i]);
    }
    free(mas);
    mas = NULL;
    return 0;
}