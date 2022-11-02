#include <stdio.h>
#include <stdlib.h>

// ЗАДАНИЕ 1

void proc(int x)
{
    if (x < 10) printf("%d\n", x);
    else printf("error\n");
    int r;
    int t;
    r = MyFunc(6, 5);
    t = MyFunc(5, 5);
    printf("res func = %d\n", r);
    printf("res func = %d\n", t);
}

// ЗАДАНИЕ 2

int MyFunc(int a, int b)
{
    if (a > b) return 1;
    else return 0;
}


int main(int argc, char const *argv[])
{
    proc(5);
    proc(15);
    return 0;
}