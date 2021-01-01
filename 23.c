/* Q2 Math */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int base = 0, height = 0;
    double area = 0.0;

    while(scanf("%d %d", &base, &height) != EOF)
    {
        area = (double)(base * height) / 2.0;
        printf("%.1lf\n", area);
    }
}