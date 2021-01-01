/* Q10 Math */  
 
#include <stdio.h>  
#include <stdlib.h>  
  
  
int main()  
{  
    double a = 0;  
  
    while(scanf("%lf", &a) != EOF)  
    {  
        printf("%.1lf\n", a * 9 / 5 + 32.0);  
    }  
}  