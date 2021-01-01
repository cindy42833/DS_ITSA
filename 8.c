/* Q12 */  
#include <stdio.h>  
  
int f(int n)  
{  
    if(n == 0 || n == 1)  
        return n + 1;  
    else  
        return f(n-1) + f(n/2);  
}  
  
int main()  
{  
    int N = 0;  
  
    while (scanf("%d", &N) != EOF)  
    {  
        int rs = 0;  
        rs = f(N);  
        printf("%d\n", rs);  
    }  
    return 0;  
}  