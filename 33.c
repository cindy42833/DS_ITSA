/* Q21 Math */  
 
#include <stdio.h>  
#include <stdlib.h>  
  
  
int main()  
{  
    int a = 0;  
    long long int sum = 1;
    while(scanf("%d", &a) != EOF)  
    {  
        sum = 1;
        
        for(int i=1; i<=a; i++)
        {
            sum *= i;
        }
        printf("%lld\n", sum);
    }  
}  