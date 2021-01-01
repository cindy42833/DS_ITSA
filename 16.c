/* Q20 Array */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N = 0, get = 0, flag = 0;

    scanf("%d", &N);
    int repeat[N+1];

    for(int i=0; i<N; i++)
    {
        repeat[i] = 0;
    }

    for(int i=0; i<N; i++)
    {
        scanf("%d", &get);
        repeat[get]++;
    }

    for(int i=0; i<N; i++)
    {
        if(repeat[i] > 1)
        {
            flag = 1;
            break;
        }
    }

    if(flag)            
        printf("0\n");
    else
        printf("1\n");
    

    return 0;
}
