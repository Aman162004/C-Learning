#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={3,5,2,7,4};
    int max = -1;
    for (int i = 0; i < 5; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
        
    }
    printf("The maximum value of element is : %d",max);
    return 0;
}
