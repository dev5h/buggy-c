#include <stdio.h>
#include <stdlib.h>
#define N 15
int main()
{
    int arr[] = {5, 7, 3, 5, 6, 7, 2, 1, 3, 2, 4, 4, 8, 5, 9};
    int frq = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i] == arr[j])
            {
                frq++;
            }
        }
        printf("Frequency of %d is %d \n", arr[i], frq);
        frq = 0;
    }
}