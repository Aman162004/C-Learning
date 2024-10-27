#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[9]={};
    printf("Enter the 9 elements of the Array");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d ",&arr[i]);
        printf("The Array is %d ", arr[i]);
    }
    printf("The Reverse number is : %d");
    for (int j = 8; j >= 0; j--)
    {
        arr[j];
        printf("The Reverse Array is : %d ", arr[j]);
    }
    
    return 0;
}
