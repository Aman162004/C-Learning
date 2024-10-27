#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    int r=0;
    while (x>0)
    {
        r = r + (x%10);
        r = r*10;
        x = x/10;
    }
    r = r/10;
    printf("The reverse of the number is %d",r);
    return 0;
}
