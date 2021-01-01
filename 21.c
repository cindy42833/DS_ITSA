/* Q47 Array */

#include <stdio.h>
#include <stdlib.h>

void display(int *ary)
{
    for(int i=0; i<10; i++)
    {
        if(i != 9)
            printf("%d ", *(ary + i));
        else
            printf("%d\n", *(ary + i));
    }
}

int *reverse(int *ary)
{
    int *tmp = (int *)malloc(sizeof(int) * 10);

    for(int i=0; i<10; i++)
    {
        *(tmp + i) = *(ary + 9 - i);
    }
    display(tmp);
}

int main()
{
    int ary[10];
    int index = 0;
    
    for(int i=0; i<10; i++)
    {
        scanf("%d", &ary[i]);
    }
    reverse(ary);
}