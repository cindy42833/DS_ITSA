/* Q48 Array */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void swap(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
}

int main()
{

    int ary[4];
    char line[10];
    int c;

    fgets(line, 10, stdin);

    line[4] = '\0';

    for(int i=0; i<4; i++)
    {
        c = (int)line[i] - 48;
        ary[i] = (c + 7) % 10;
    }
    
    swap(&ary[0], &ary[2]);
    swap(&ary[1], &ary[3]);

    for(int i=0; i<4; i++)
    {
        printf("%d", ary[i]);
    }
    printf("\n");

    return 0;
}
