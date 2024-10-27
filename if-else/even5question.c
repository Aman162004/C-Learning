#include <stdio.h>

int main()
{
    int x;
    printf("Enter a Positive Number", x);
    scanf("%d",&x);
    if (x%5==0)
    {
        printf("Number is divisible by 5");
    }
    else{
        printf("number is not divisible by 5");
    }
    return 0;
}
