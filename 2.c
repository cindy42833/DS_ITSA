/* Q2 */
#include <stdio.h>

int main()
{
    int cost = 0, start_hour = 0, end_hour = 0, start_min = 0, end_min = 0;

    while (scanf("%d %d %d %d", &start_hour, &start_min, &end_hour, &end_min) != EOF)
    {
        int interval = (end_hour - start_hour - 1) * 60 + (60 - start_min + end_min);

        if(interval <= 120)
            cost = interval / 30 * 30;
        else if(interval > 120 && interval < 240)
            cost = 120 + (interval - 120) / 30 * 40;
        else if(interval >= 240)
            cost = 120 + 160 + (interval - 240) / 30 * 60;
        
        printf("%d\n", cost);
    }
    return 0;
}