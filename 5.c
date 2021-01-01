/* Q8 */
#include <stdio.h>

int main()
{
    int digit;

    while (scanf("%d", &digit) != EOF)
    {
        int prime = 1;
        for(int i=2; i<digit; i++)
        {
            if(digit % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if(prime)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}