/* Q2 Array */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *tok ;
    char line[1000];
    int ary[100];

    while(fgets(line, 1000, stdin) != NULL)
    {
        int index = 0;
        tok = strtok(line, " ");


        while (tok != NULL)
        {
            ary[index++] = atoi(tok);
            tok = strtok(NULL, " ");
        }
        for(int i=index-1; i>=0; i--)
        {
            if(i != 0)
                printf("%d ", ary[i]);
            else
                printf("%d", ary[i]);
        }
        printf("\n");
    }
    return 0;
}
