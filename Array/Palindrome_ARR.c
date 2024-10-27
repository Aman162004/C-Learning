#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,2,1};
    int is_palindrome = 1;
    for (int i = 0; i < 5/2; i++)
    {
        if (arr[i]!=arr[5-i-1])
        {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}
