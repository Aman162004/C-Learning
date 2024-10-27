#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if (x%5==0 || x%3==0)
    {
        printf("the number is divisible by 3 or 5");
    }
    else{
        printf("The number is not divisible by 3 or 5");
    };
    
    return 0;
}
