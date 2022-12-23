#include <stdio.h>
#include <stdlib.h>

typedef int (*TFunc)(int, int);

int max(int a, int b){
    if (a>b) return a;
    else return b;
}

int min(int a, int b){
    if (a<b) return a;
    else return b;
}
 
int GetOne(int mas[], TFunc fn){
    int val = mas[0];
    if (fn !=NULL)
    {
        for(int i=1; i<10; i++)
            val=fn(val, mas[i]);
        return val;
    }
    /* free(fn);
    fn = NULL; */
}

int main(int argc, char const *argv[])
{
    int a[10] = {12, 34, 45, 777, 23, 98, 89, 21, 43, 1000};
    printf("%d\n", GetOne(a, NULL));
    TFunc fn[2];
    fn[0]=max;
    fn[1]=min;
    printf("%d\n", fn[0](34,67));
    printf("%d\n", fn[1](34,67));
    return 0;
}
