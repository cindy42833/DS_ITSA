/* Q3 */
#include <stdio.h>

int main()
{
    int x = 0, y = 0;

    while (scanf("%d %d", &x, &y) != EOF)
    {
        int dis = x * x + y * y;

        if(dis > 20000)
            printf("outside\n");
        else
            printf("inside\n");
        
    }
    return 0;
}