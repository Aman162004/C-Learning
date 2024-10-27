#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={2,4,5,1,7};
    arr[4]=20;
    for (int i = 0; i < 5; i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}
