#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // to print the matrix in a readable format
    }
    return 0;
}
