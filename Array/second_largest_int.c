#include <stdio.h>
#include <stdlib.h>
int n = 10;
int main()
{
    int nums[10] = {-5, 45, 20, -30, -20, -70, 80, -1, 10, 70};
    int max1 = 1;
    int max2 = 0;
    for (int i = 0; i < n; i++)
    {

        if (nums[i] > max1 && max2 < max1)
        {
            max2 = max1;
            max1 = nums[i];
        }
        else if (nums[i] > max2 && nums[i] < max1)
        {
            max2 = nums[i];
        }
    }
    printf("Max: %i ", max2);
    printf("\n");
}