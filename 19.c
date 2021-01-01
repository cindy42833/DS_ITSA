/* Q46 Array */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    double sum = 0.0, str = 0.0;

    while (scanf("%lf", &str) != EOF)
    {
        sum += str * str;
    }
    
        
    printf("%.6lf\n", sum);
    
    return 0;
}
