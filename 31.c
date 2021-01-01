/* Q12 Math */  
 
#include <stdio.h>  
#include <stdlib.h>  
  
  
int main()  
{  
    int dis = 0;  
    double cut = (100 - 30 * 2.54) / 100, sec = 0.0;
    while(scanf("%d", &dis) != EOF)  
    {  
        sec = dis / cut;
        if(sec > (int)sec)
            sec += 1;

        printf("%d\n", (int)sec);  
    }  
}  