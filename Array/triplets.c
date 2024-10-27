#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[7] = {1,2,9,5,7,8,4};
    int totaltriplets = 0;
    int x = 12;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                if (arr[i]+arr[j]+arr[k] == x)
                {
                    totaltriplets = totaltriplets+x;
                printf("(%d,%d,%d) \n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    return 0;
}
