#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={2,4,1,6,8};
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
    }
    printf("The min. number is: %d",min);
    return 0;
}
