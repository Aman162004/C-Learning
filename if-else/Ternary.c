#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    x%2==0 ? printf("Even Number") : printf("Odd Number");
    return 0;
}
