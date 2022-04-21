#include <stdio.h>
#include <stdlib.h>

int check(int val, int arr[], int arrSize);

int main()
{
    int arrSize = 5;
    int arr[arrSize];

    int test = check(4, arr, arrSize);
    printf("%d", test);

    return 0;
}

int check(int val, int arr[], int arrSize)
{
    int i;
    for (i = 0; i < arrSize; i++)
    {
        if (arr[i] == val)
            return 1;
    }
    return 0;
}