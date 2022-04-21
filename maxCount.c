#include <stdio.h>
// Program to count most occuring element
int getMaxRepeatingElement(int array[], int n)
{
    int i, j, maxElement, count, MaxCT = 0;
    int maxCount = 0;
    /* Frequency of each element is counted and checked.If it's greater than the utmost count element we found till now, then it is updated accordingly  */
    for (i = 0; i < n; i++) // For loop to hold each element
    {
        count = 1;
        for (j = i + 1; j < n; j++) // For loop to check for duplicate elements
        {
            if (array[j] == array[i])
            {
                count++;
                MaxCT++; // Increment  count
                /* If count of current element is more than
                maxCount, then update maxElement */
                if (count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    // printf("Max Count=  %d", MaxCT);
    if (MaxCT > 2)
    {
        return maxElement;
    }
    else
    {
        return -1;
    }
}
// Driver Program
int main()
{

    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {

        int n; // Array Size Declaration
        // printf("Enter the number of elements ");
        scanf("%d", &n);
        int array[n]; // Array Declaration
        // printf("Enter the array elements");
        for (int i = 0; i < n; i++) // Initializing Array Elements
        {
            scanf("%d", &array[i]);
        }
        int maxElement = getMaxRepeatingElement(array, n); // Function call
        printf("%d\n", maxElement);
    }

    // Prints the most occuring element
    return 0;
}