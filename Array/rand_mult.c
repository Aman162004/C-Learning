#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,4,5};
    int mult = 1;
    for (int i = 0; i < 5; i++)
    {
        mult = arr[i]*arr[i];
        printf("%d\n",mult);
    }
    
    return 0;
}
