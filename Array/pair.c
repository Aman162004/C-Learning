#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[7] = {1,2,9,5,7,8,4};
    int totalpairs = 0;
    int x = 12;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i +1; j <= 7; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalpairs++;
                printf("(%d,%d)",arr[i],arr[j]);
            }
        }
    }
    return 0;
}
