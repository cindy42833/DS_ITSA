/* Q34 */  
#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()  
{  

    int gender = 0;
    double height = 0;
    while(scanf("%lf %d", &height, &gender) != EOF)
    {
        double weight = 0;

        if(gender == 1)
            weight = (height - 80) * 0.7;
        else 
            weight = (height - 70) * 0.6;
        printf("%.1lf\n", weight);
    }
   
    return 0;  
}  