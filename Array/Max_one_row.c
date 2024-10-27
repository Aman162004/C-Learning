#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[3][4] = {{1,0,1,1},
    {0,1,1,0},
    {1,1,1,1}};
    int count = 0;
    int max_count = 0;
    int idx = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j]==1)
            {
                count++;
            }
            if (max_count<count)
            {
                max_count = count;
                idx = i;
            }
            break;

        }
    }
    printf("\n");
    printf("Max number of 1 in row is %d and its row number is %d ", max_count,idx);
    return 0;
}
