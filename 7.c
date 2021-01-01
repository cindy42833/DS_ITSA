/* Q14 */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];

    while (scanf("%s", str) != EOF)
    {
        int len = strlen(str), same = 1;
        for(int i=0; i<len/2; i++)
        {
            if(str[i] != str[len-i-1])
            {
                same = 0;
                break;
            }
        }        
        if(same)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}