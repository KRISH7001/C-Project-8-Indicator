#include <stdio.h>

void findCubes(int *ptr, int size)
{
    int i, j;

    printf("\nCubes of all elements:\n");

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            int value = *(ptr + i * size + j);
            printf("%d ", value * value * value);
        }

        printf("\n");
    }
}

int main()
{
    int a[10][10];
    int size;
    int i, j;

    printf("Enter array's size: ");
    scanf("%d", &size);

    printf("\nEnter array elements:\n");

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    findCubes(&a[0][0], size);

    return 0;
}