/* Q21 */  
#include <stdio.h>  
  

  
int main()  
{  
    double max = 0.0, min = 0.0;
    double ary[10];

    for(int i=0; i<10; i++)
    {
        scanf("%lf", &ary[i]);
    }
    max = ary[0];
    min = ary[0];

    for(int i=0; i<10; i++)
    {
        if(max < ary[i])
            max = ary[i];
        else if(min > ary[i])
            min = ary[i];
    }
    printf("maximum:%.2lf\n", max);
    printf("minimum:%.2lf\n", min);
    
    return 0;  
}  