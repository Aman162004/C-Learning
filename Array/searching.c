#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    int arr[7]={1,2,3,4,5,6,7};
    int x =5;
    int idx;
    bool flag = false;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]==x)
        {
            flag = true;
            idx = i;
            break;
        }
    }
    if (flag == false)
    {
        printf("%d is not present in array",x);
    }
    else{
        printf("%d is present in the array and it's index is %d",x,idx);
    }
    return 0;
}
