/* Q4 Math */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a = 0, b = 0, q = 0, r = 0;

    while(scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d+%d=%d\n", a, b, a + b);
        printf("%d*%d=%d\n", a, b, a * b);
        printf("%d-%d=%d\n", a, b, a - b);
        q = a / b;
        r = a % b;

        if(r < 0)
        {
            if(b < 0)
            {
                q += 1;
                r -= b;
            }
            else
            {
                q -= 1;
                r += b;
            }
            
        }
        printf("%d/%d=%d...%d\n", a, b, q, r);
        
    }
}