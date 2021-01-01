/* Q22 Array */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int table[26];
    int c;

    for(int i=0; i<26; i++)
    {
        table[i] = 0;
    }

    while((c = getchar()) != EOF)
    {
        if(isalpha(c))
        {
            c = tolower(c);
            table[c - 97]++;
        }
    }

    for(int i=0; i<26; i++)
    {
        if(i != 25)
            printf("%d ", table[i]);
        else
            printf("%d", table[i]);
    }

    return 0;
}
