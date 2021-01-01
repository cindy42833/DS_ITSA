/* Q26 Math */  
 
#include <stdio.h>  
#include <stdlib.h>  
  
  
int main()  
{  
    int a = 0;  
  
    while(scanf("%d", &a) != EOF)  
    {  
        for(int i=1; i<=a; i++) 
        {
            printf("%d*%d=%d\n", i, i, i*i);
        }
    }  
}  