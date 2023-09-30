#include <stdio.h>

int main()
{
    int a[10], b[10], c[100], m, n, i, j, temp = 0;

    printf("Enter the number of elements in array a: \n");
    scanf("%d", &m);

    printf("Enter number in array a:");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements in array b: \n");
    scanf("%d", &n);

    printf("Enter number in array b:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < m; i++)
        c[i] = a[i];
    j = i;
    for (i = 0; i < n; i++, j++)
        c[j] = b[i];

    printf("Merged array is \n");
    for (i = 0; i < m + n; i++)
        printf("%d ", c[i]);

    for (i = 0; i < m + n; i++)
    {
        for (j = 0; j < m + n; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\nSorted array is:\n");
    for (i = 0; i < m + n; i++)
        printf("%d ", c[i]);

    return 0; 
   } 
