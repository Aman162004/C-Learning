#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    int sum = 0;
    int lastdigit = 0;
    while (x!=0)
    {
        lastdigit =x%10;
        sum = sum + lastdigit;
        x = x/10;
    }
    printf("The sum of digits of the number is %d",sum);
    return 0;
}
