/* Q5 */
#include <stdio.h>

int main()
{
    int N = 0;

    while (scanf("%d", &N) != EOF)
    {
        int sum = 0;
        for(int i=3; i<=N; i++)
        {
            if(i % 3 == 0)
                sum += i;
        }
        printf("%d\n", sum);
    }
    return 0;
}