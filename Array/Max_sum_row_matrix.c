#include <stdio.h>

int main()
{
    int rows = 3;
    int cols = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int max_sum = 0;
    int row_index = 0;

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }

        if (sum > max_sum)
        {
            max_sum = sum;
            row_index = i;
        }
    }

    printf("The row with the maximum sum is: %d\n", row_index);
    printf("The maximum sum is: %d\n", max_sum);

    return 0;
}
