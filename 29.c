/* Q9 Math */  
 
#include <stdio.h>  
#include <stdlib.h>  
  
  
int main()  
{  
    int a = 0, base = 1, sum = 1;  
  
    while(scanf("%d", &a) != EOF)  
    {  
        sum = 1;
        if(a >= 31) 
            printf("Value of more than 31\n");
        else
        {
            sum = base << a;
            printf("%d\n", sum);
        }
    }  
}  