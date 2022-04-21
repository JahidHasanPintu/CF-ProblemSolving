#include <stdio.h>
int cheking(int target, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            printf("Target found\n");
        }
    }
}
int main()
{
    int n, arrSize;
    scanf("%d", &arrSize);
    int arr[arrSize];
    printf("Taking array\n");
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("printing array\n");
    for (int i = 0; i < arrSize; i++)
    {
        printf("%d \n", arr[i]);
    }

    cheking(5, arr, arrSize);

    return 0;
}