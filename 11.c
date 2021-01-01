/* Q32 */  
#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()  
{  
    char line[1000];
    char *ptr = NULL;
    int shift = 0;

    fgets(line, 1000, stdin);

    if(line[strlen(line) - 1] == '\n')
            line[strlen(line) - 1] = '\0';
    scanf("%d", &shift);

    ptr = line;
    while (*ptr != '\0')
    {
        if(isupper(*ptr))
        {
            shift %= 26;
            if(((int)*ptr + shift) > 90)
                *ptr = (int)*ptr + shift - 26;
            else
                *ptr = (int)*ptr + shift;
        }
        else if(islower(*ptr))  
        {
            shift %= 26;
            if(((int)*ptr + shift) > 122)
                *ptr = (int)*ptr + shift - 26;
            else
                *ptr = (int)*ptr + shift;
        }
        else if(isdigit(*ptr))
        {
            shift %= 10;
            if(((int)*ptr + shift) > 57)
                *ptr = (int)*ptr + shift - 10;
            else
                *ptr = (int)*ptr + shift;
        }
        ptr++;
    }
    
    printf("%s\n", line);
    return 0;  
}  