#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    char mas[10][21];
    int i;
    int x = 5, y = 10;
    char key;
    int ox, oy;
    int ax = 3, ay = 5;
    int s = 0;
    srand(56);

    do
    {
         sprintf(mas[0], "####################");
        for (i = 1; i < 9; i++)
            sprintf(mas[i], "#                  #");
        sprintf(mas[9], "####################");

        mas[x][y] = '$';
        mas[ax][ay] = '*';
        system("clear");

        for(i = 0; i < 10; i++)
        printf("%s\n", mas[i]);
        printf("You add apples: %d\n",s);

        key = getchar();

        ox = x;
        oy = y;
        if(key=='w') x--;
        if(key=='s') x++;
        if(key=='a') y--;
        if(key=='d') y++;
        if(mas[x][y] == '#')
        {
            x = ox;
            y = oy;
        }
        if((x == ax) && (y == ay))

        {   
            ax = rand() * 1.0 / RAND_MAX * 8 + 1;
            ay = rand() * 1.0 / RAND_MAX * 18 + 1;
            s++;
        }

    } 
    while (key != 'e');

    return 0;
}