#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    FILE *f;
    char c[3] = "AB";
    c[1] = 26;
    f = fopen("char.txt", "wb");
    fprintf(f, c);
    fclose(f);

    char buf[10]="";
    f = fopen("char.txt", "rb");
        fread(buf, 1, sizeof(buf), f);
    fclose(f);
    for(int i = 0; i < 10; i++)
        printf("%d\n", buf[i]);

    return 0;
}
