#include <stdio.h>
#include <stdlib.h>

void func(int a, int b, int c) {
    printf("%d, %d, %d\n", &a, &b, &c );
    int *ptr  = &a + 1; // ПЕРЕХОД К СЛЕДУЮЩЕМУ АДРЕСУ 
    printf("%d\n", *(ptr++));
    printf("%d\n", *(ptr++));
}

double summ (int cnt, ...) //  ФУНКЦИЯ ПРИНИМАЕТ ХОТЯ БЫ ОДИН АРГУМЕНТ, ... - ОЗНАЧАЕТ ПЕРЕМЕННОЕ КОЛИЧЕСТВО АРГУМЕНТОВ
{
    double res = 0;
    double *ptr = &cnt + 1;
    for(; cnt > 0; cnt--)
        res += *(ptr++);
    return res;
}

int main(int argc, char const *argv[])
{
    func(10, 23, 34);
    printf("%f\n", summ(3, 5.1, 6.2, 7.3));
    return 0;
}
 