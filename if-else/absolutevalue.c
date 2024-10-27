#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    if (x<0)
    {
        x=x*(-1);
    }
    printf("The Absolute Value is:%d",x);
    return 0;
}
