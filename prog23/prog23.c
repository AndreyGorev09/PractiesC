#include <stdio.h>
#include <stdlib.h>

// ПРОЦЕДУРА С РЕКУРСИЕЙ
void MyPrint(int cnt){
    printf("%d = text\n", cnt);
    cnt--;
    if (cnt>0)
        MyPrint(cnt);
}

int MyFactorial(int cnt){
    int res = 1;
    if(res == cnt)
        printf("%d", res);
    else
        for(int i = 1; i <= cnt; i++)
            res*=i;
        printf("%d\n", res);
}

int RecurceMyFactorial(int cnt){
    if (cnt > 1)
        return cnt * RecurceMyFactorial(cnt - 1);
    else return cnt;
    
}

int main(int argc, char const *argv[])
{
    /* int i;
    printf("Input number i= ");
    scanf("%d", &i);
    if(i<10) 
        i=10;
    else 
        i*=2;
    printf("%d\n", i);
    i = 50 + (i < 10 ? 10 : i*2);
    printf("%d\n", i); */
    // MyPrint(90);  ВЫЗОВ ПРОЦЕДУРЫ
    MyFactorial(3);
    printf("%d\n", RecurceMyFactorial(3));
    return 0;
}
