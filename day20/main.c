#include <stdio.h>
int main(void)
{
int n, i, j;
int a[100];
int count = 0, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = 0;
        for(j = i; j < n; j++)
        {
            sum += a[j];
            if(sum == 0)
                count++;
        }
    }

    printf("Number of subarrays with sum 0 = %d\n", count);

    return 0;
}
