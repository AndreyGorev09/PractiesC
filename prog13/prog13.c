#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct sPoint //  ОПРЕДЕЛЕНИЕ СТРУКТУРЫ sPoint СОДЕРЖАЩАЯ ПЕРЕМЕННЫЕ x, y К КОТОРЫМ МОЖНО ОБРАЩАТЬСЯ ЧЕРЕЗ ПЕРМЕННУЮ p;
{
    int x, y;
} p;

/* int main(int argc, char const *argv[])
{
    struct sPoint a; // ОПРЕДЕЛЕНИЕ НОВОЙ ПЕРЕМЕННОЙ - a, СТРУКТУРЫ sPoint;
    p.x = 7;
    p.y = 8;
    a.x = 10;
    a.y = 15;
    printf("p.x = %d, p.y = %d\n", p.x, p.y);
    printf("a.x = %d, a.y = %d\n", a.x, a.y);
    return 0;
} */


typedef int celoe; // ОПРЕДЕЛЕНИЕ НОВОГО ТИПА CELOE НАСЛЕДУЕМОЕ ОТ ТИПА INT ;

/* int main(int argc, char const *argv[])
{
    celoe i = 5;
    printf("%d\n", i);
    return 0;
} */


typedef struct sPoint TPoint; // ОПРЕДЕЛЕНИЕ НОВОГО ТИПА TPoint НАСЛЕДУЕМОЕ ОТ СТРУКТУРЫ sPoint;

/* int main(int argc, char const *argv[])
{
    TPoint c;
    c.x = 30;
    c.y = 40;
    TPoint v[10]; // ОПРЕДЕЛЕНИЯ МАССИВА И ПРИСВАИВАНИЕ ЗНАЧЕНИЙ МАССИВУ ЧЕРЕЗ ПЕРЕМЕННЫЕ СТРУКТУРЫ;
    v[0].x = 1;
    v[0].y = 2;
    printf("c.x = %d, y = %d\n", c.x, c.y);
    printf("v[0].x = %d, v[0].y = %d\n", v[0].x, v[0].y);
    return 0;
} */


// ОБЛОСТИ ВИДИМОСТИ: ГЛОБАЛЬНАЯ И ЛОКАЛЬНАЯ
int x = 7; // ГЛОБАЛЬНАЯ ОБЛОСТЬ ВИДИМОСТИ
int main(int argc, char const *argv[])
{
    int y = 8; // ЛОКАЛЬНАЯ ОБЛАСТЬ ВИДИМОСТИ
    {
        printf("%d\n", x);
        printf("%d\n", y);
    }
    return 0;
}