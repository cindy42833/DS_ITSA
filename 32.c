/* Q15 Math */  
 
#include <stdio.h>  
#include <stdlib.h>  
  
  
int main()  
{  
    int x = 0, y = 0;  
  
    while(scanf("%d %d", &x, &y) != EOF)  
    {  
        if(x > 100 || y > 100)
            printf("outside\n");  
        else
            printf("inside\n");
    }  
}  