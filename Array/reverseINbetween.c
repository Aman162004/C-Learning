#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int temp;
    
    // reverse array from index 1 to 4
    for (int i = 1, j = 4; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    // print the array
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
