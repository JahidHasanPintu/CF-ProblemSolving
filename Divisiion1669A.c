#include <stdio.h>

int main()
{
    int n, rating;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &rating);
        if (rating >= 1900)
        {
            printf("Division 1\n");
        }
        else if (rating >= 1600 && rating <= 1899)
        {
            printf("Division 2\n");
        }
        else if (rating >= 1400 && rating <= 1599)
        {
            printf("Division 3\n");
        }
        else if (rating <= 1399)
        {
            printf("Division 4\n");
        }
    }
}