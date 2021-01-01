/* Q6 */
#include <stdio.h>

int main()
{
    int month = 0;

    while (scanf("%d", &month) != EOF)
    {
        switch (month)
        {
            case 3 ... 5:
                printf("%s\n", "Spring");
                break;
            case 6 ... 8:
                printf("%s\n", "Summer");
                break;
            case 9 ... 11:
                printf("%s\n", "Autumn");
                break;
            case 1 ... 2:
            case 12:            
                printf("%s\n", "Winter");
                break;
        }
    }
    return 0;
}