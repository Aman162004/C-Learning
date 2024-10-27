#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int product = 1 ;
    for (int i = 0; i < 6; i++)
    {
        product = product * arr[i];
    }
    printf("The product of all the elements of the array is %d",product);
    return 0;
}
