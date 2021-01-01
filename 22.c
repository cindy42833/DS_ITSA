/* Q1 Math */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int upper = 0, lower = 0, height = 0;
    double area = 0.0;

    while(scanf("%d %d %d", &upper, &lower, &height) != EOF)
    {
        area = (double)((upper + lower) * height) / 2.0;
        printf("Trapezoid area:%.1lf\n", area);
    }
}