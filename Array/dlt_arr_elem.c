/*
@ Buggy
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr, key;
    arr = (int *)malloc(1 * sizeof(int));
    printf("Insert numbers, insert zero if you want to stop\n");
    int x = 0;
    int loop = 1;
    while (loop == 1)
    {
        int num;
        scanf("%d", &num);
        if (num == 0)
        {
            loop = 0;
        }
        else
        {
            *(arr + x) = num;
            x++;
            arr = (int *)realloc(arr, (x + 1) * sizeof(int));
            printf("Inserted\n");
        }
    }
    printf("Your entered array is: ");
    for (int i = 0; i < x; i++)
    {
        printf("%i   ", *(arr + i));
    }
    printf("\n");
    printf("Type the index you want to delete: ");
    scanf("%d", &key);
    if (key < x)
    {
        // arr[key] = 0;
        for (int i = 0; i < (x - key - 1); i++)
        {

            *(arr + key + i) = *(arr + key + i + 1);
            printf("Pushing %i", *(arr + key + i + 1));
        }
        x--;
        arr = (int *)realloc(arr, x * sizeof(int));
    }
    else
    {
        printf("Invalid Key \n");
    }

    printf("Deleted array is: ");
    for (int i = 0; i < x; i++)
    {
        printf("%i   ", *(arr + i));
    }
    printf("\n");
    free(arr);
}
