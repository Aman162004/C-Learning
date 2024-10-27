#include <stdio.h>
int main()
{
    int x;
    printf("Enter the Number");
    scanf("%d",&x);
    if (x%5==0 && x%3==0)
    {
        printf("The Number is divisible by 5 and 3");
    }
    else{
        printf("The number is not divisible by 3 and 5");
    }
    return 0;
}
