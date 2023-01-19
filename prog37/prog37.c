#include <stdio.h>
#include <stdlib.h>

/* #define BOLD        0b0001
#define ITALIC      0b0010
#define UNDERLINE   0b0100 */

enum {BOLD = 0b0001, ITALIC = 0b0010, UNDERLINE = 0b0100};


int main(int argc, char const *argv[])
{
    
    char textParam = BOLD | UNDERLINE;
    if ( textParam & BOLD )
        printf("Text is BOLD\n");
    if ( textParam & ITALIC )
        printf("Text is ITALIC\n");
    if ( textParam & UNDERLINE )
        printf("Text is UNDERLINE\n");
    return 0;
}