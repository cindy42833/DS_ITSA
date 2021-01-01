/* Q9 Array */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void slection_sort(int *ary, int N)
{
    int index = 0, max_index = -1;

    for(int i=0; i<N; i++)
    {
        int max = -100000;
        index = i;

        while (index < N)
        {
            if(ary[index] > max)
            {
                max_index = index;
                max = ary[index];
            }
            index++;
        }
        if(max_index != -1)
            swap(&ary[max_index], &ary[i]);
    }
}

int main()
{
    char *tok;
    char line[1000];
    int ary[100];
    

    while(fgets(line, 1000, stdin) != NULL)
    {
        int index = 0, x = 0, y = 0;
        tok = strtok(line, ",");


        while (tok != NULL)
        {
            ary[index++] = atoi(tok);
            tok = strtok(NULL, ",");
        }

        slection_sort(ary, index);
        
        int base = 1;
        for(int i=index-1; i>=0; i--)
        {
            x += base * ary[i];
            base *= 10;
        }

        base = 1;

        for(int i=0; i<index; i++)
        {
            y += base * ary[i];
            base *= 10;
        }


        printf("%d\n", x-y);
    }
    return 0;
}
