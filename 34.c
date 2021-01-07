/* Q27 Math */  
 
#include <stdio.h>  
#include <stdlib.h>  

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
  
int main()  
{  
    int a = 0, b = 0, sum = 0;  
    while(scanf("%d %d", &a, &b) != EOF)  
    {  
        sum = 0;
        if(a > b)
            swap(&a, &b);

        for(int i=a; i<=b; i++)
        {
            sum += i;
        }
        printf("%d\n", sum);
    }  
}  