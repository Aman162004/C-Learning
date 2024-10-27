#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[7]={2,5,3,8,1,9,7};
    for (int i = 0; i < 7; i++)
    {
        if (i%2==0)
        {
            arr[i] = arr[i]*2;
        }
        else{
            arr[i] = arr[i] + 10;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
