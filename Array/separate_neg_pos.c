#include <stdio.h>
#include <stdlib.h>
int n = 10;
int main()
{
    int nums[10] = {-5, 45, 20, 30, -30, -20, -70, 80, -1, 10};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%i   ", nums[i]);
    }
    printf("\n");
}