#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;
    printf("Enter 1st Number a:\n");
    scanf("%d", &a);
    printf("Enter 2nd Number b:\n");
    scanf("%d", &b);
    printf("Enter 3rd Number c:\n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%da is greatest",a);
    }
    if (b > a && b > c)
    {
        printf("%db is greatest",b);
    }
    if (c > b && c > a)
    {
        printf("%dc is greatest",c);
    }

    return 0;
}
