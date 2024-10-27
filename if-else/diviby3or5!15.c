#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if ((x%5==0 || x%3==0) && x%15!=0)
    {
        printf("The number is divisible by both 3 and 5");
    }
    else{
        printf("The number is not divisible by both 3 and 5");
    };
    
    return 0;
}
