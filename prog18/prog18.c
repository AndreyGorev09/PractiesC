#include <stdio.h>
#include <stdlib.h>


struct Spoint
{
    int x;
    int y;
};

typedef struct Spoint Tpoint;


void ShowPoint (Tpoint point)
{
    printf("num1 = %d, num2 = %d\n", point.x, point.y);
}

void ShowRse(Tpoint *Fres, int set1, int set2)
{
    if(Fres != NULL)
    {
        (*Fres).x = set1;
        (*Fres).y = set2;   
    }
}

int main(int argc, char const *argv[])
{
    Tpoint p;
    p.x = 56;
    p.y = 78;
    
    ShowPoint(p);

    Tpoint *Tre = NULL;
    Tre = &p;

    ShowRse(Tre, 45,67);

    printf("x = %d, y = %d\n", (*Tre).x, (*Tre).y);

    return 0;
}



