#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define width 65
#define heigth 25
char mas[heigth][width+1];

typedef struct 
{
    int x,y;
    int w;
} TRacket;

TRacket racket;

void initRacket()
{
    racket.w = 7;
    racket.x = (width - racket.w) / 2;
    racket.y = heigth - 1;
}

void putRacket()
{
    for(int i = racket.x;i<racket.x+racket.w;i++)
    {
        mas[heigth-1][i] = '@';
    }
}

void moveRacket(int x)
{
    racket.x = x;
    if(racket.x < 1)
        racket.x = 1;
    if(racket.x + racket.w >= width)
        racket.x = width - 1 - racket.w;
}

void init()
{
    for(int i=0;i<width;i++)
    {
        mas[0][i] = '#';
    }

    mas[0][width] = '\0';
    strncpy(mas[1], mas[0], width);

    for(int i=1;i<width-1;i++)
    {
        mas[1][i] = ' ';
    }

    for(int i=2; i<heigth;i++)
    {
        strncpy(mas[i],mas[1], width);
    }
    
  
}

void show()
{
    for(int i=0;i<heigth;i++)
    {
        printf("%s\n", mas[i]);
        /* if(i<heigth-1)
            printf("\n"); */
    }
}


/* void setcur(int x, int y)
{
    COORD coord;
    coord.X  = x;
    coord.Y = y;
    SetConsolCursorPosition(GetStdHandler(STD_OUTPUT_HANDLE), coord);
} */

int main(int argc, char const *argv[])
{
    char c;
    initRacket();

    do
    {
        // setcur(0,0);
        system("clear");
        init();
        putRacket();
        show();
        c = getchar();
        if(c == 'a') moveRacket(racket.x - 1);
        if(c == 'd') moveRacket(racket.x + 1);
        // Sleep(10);
    }
    while (c!='q');    
    return 0;
}
