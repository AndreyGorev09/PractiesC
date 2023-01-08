#include <stdio.h>
#include <stdlib.h>

struct SPoint{
    int x,y;
};

struct SSize{
    int width, heigth;
};


struct SShape{
    char *name;
    struct SPoint point; // ОПРЕДЕЛЕНИЕ НАСЛЕДОВАНИЯ СТУКТУРЫ SPoint
    union 
    {
        struct  SSize size; // ОПРЕДЕЛЕНИЕ НАСЛЕДОВАНИЯ СТУКТУРЫ SSize
        float radius;
    };
};

union U1 {
    int x;
    char mas[4]; // ОБЪЕДИНЕНИЯ ТИПОВ ДАННЫХ, ИМЕЮТ ОДИНАКОВЫЙ АДРЕС В ПАМЯТИ
};


int main(int argc, char const *argv[])
{
    union U1 a;

    a.mas[1] = 7;
    a.x = 56;
    printf("%d %d\n", a.mas[1], a.x);
      
    struct SShape shape = {"quad", 24, 45, 0}; // ИНИЦИАЛИЗАЦИЯ СТРУКТУРЫ
    shape.point.x = 55;
    shape.radius = 99.25;
    printf("%s  %d  %d  %f\n", shape.name, shape.point.x, shape.point.y, shape.radius); //shape.size.width, shape.size.heigth);  ВЫЗОВ ПАРАМЕТРОВ СТРУКТУРЫ SShape
    return 0;
}
 