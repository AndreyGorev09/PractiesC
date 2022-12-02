#include <stdio.h>
#include <stdlib.h>


struct Point{
    int x;
    int y;
    char mas[20];
};

typedef struct Point Rond;

void ShowPoint(Rond point)
{
    printf("num1 = %d, num2 = %d, string = %s\n", point.x, point.y, point.mas);
};

void SetPoint(Rond *Sete, int Num1, int Num2, char ChStr[20])
{
    if(Sete != NULL)
    {
        (*Sete).x = Num1;
        (*Sete).y = Num2;
        sprintf((*Sete).mas, ChStr);

    }
}

int main(int argc, char const *argv[])
{
    Rond p;
    Rond *Der;
    Der = &p;
    SetPoint(Der, 100, 200, "Hello!");
    ShowPoint(p);
    return 0;
}
