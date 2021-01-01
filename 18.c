/* Q43 Array */
#include <stdio.h>

int mypow(int sum, int base, int num)
{
    if(num == 0)
        printf("%d\n", sum);
    else
    {
        sum *= base;
        num--;
        return mypow(sum, base, num);
    }
}

int main()
{
    int base = 0, num = 0, sum = 1;

    while(scanf("%d %d", &base, &num) != EOF)
    {
        mypow(sum, base, num);
    }

    return 0;
}
