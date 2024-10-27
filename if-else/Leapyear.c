#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter The Year About Which you want to know:");
    scanf("%d",&x);
    if (x%400==0)
    {
        printf("It is Leap year");
    }
    else{
        printf("Its not a leap year");
    }
    
    return 0;
}
