#include <stdio.h>
#include <stdlib.h>

int GetNum() {
    static int i = 0; /* СТАТИЧЕСКАЯ ПЕРЕМЕННАЯ ОСТАЕТСЯ В ПАМЯТИ НА ВСЕ ВРЕМЯ 
    РАБОТЫ ПРОГРАММЫ И ИНИЦИАЛИЗИРУЕТ ПЕРЕМЕННУЮ ОДИН РАЗ */
    printf("%d\n", i);
    i++;
}



 int main(int argc, char const *argv[])
{
    //СТАТИЧЕСКИЕ ПЕРЕМЕННЫЕ
    GetNum();
    GetNum();
    GetNum();


    // ФУНКЦИЯ SWITCH 
    int num;
    printf("Input num ");
    scanf("%d", &num);

    switch (num)
    {
    case 7:
    case 2:
    case 9:
        printf("%d\n", num);
        break;
    
    default:
        printf("None\n");
    }

    return 0;
}
