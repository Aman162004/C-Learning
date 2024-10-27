#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[7] = {45,54,67,77,85,24,34};
    int x;
    printf("Enter the Number from which you want to compare");
    scanf("%d",&x);
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]>x)
        {
            arr[i]=arr[i];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf{"%d ",arr[i]};
    }
    return 0;
}
