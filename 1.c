/* Q2 */
#include <stdio.h>

int main()
{
    int mile;

    while (scanf("%d", &mile) != EOF)
    {
        printf("%.1lf\n", mile * 1.6);
    }
    return 0;
}