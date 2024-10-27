#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[7]={1,2,3,4,3,2,1};
    int i = 0;
    int j = 7;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 7; j > 0; j--)
        {
            if (arr[i]=arr[j])
            {
                printf("The Array is Palindrome.");
            }
        }
    }
    return 0;
}
