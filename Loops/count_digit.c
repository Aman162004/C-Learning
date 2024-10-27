#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    int count = 0;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The number of digits in the number is %d",count);
    return 0;
}
