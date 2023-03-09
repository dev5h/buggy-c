#include <stdio.h>
#include <stdlib.h>
#define N 15
int *remove_array_elm(int *arr, int size, int index);

int main(void)
{
    int arr[] = {5, 7, 3, 5, 6, 7, 2, 1, 3, 2, 4, 4, 8, 5, 9};
    int n = 15;
    // int arr2 = remove_array_elm(&arr, N, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[j] == arr[i])
                {
                    // Duplicate found
                    remove_array_elm(arr, n, j);
                    n -= 1;
                }
            }
        }
    }
    printf("Duplicate free array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%i   ", arr[i]);
    }
    printf("\n");
}

int *remove_array_elm(int *arr, int size, int index)
{
    for (int i = 0; i < size - index - 1; i++)
    {
        if (index < size)
        {
            *(arr + index + i) = *(arr + index + i + 1);
        }
    }
    return arr;
}