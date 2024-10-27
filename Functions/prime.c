#include <stdio.h>
int Prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (Prime(x))
    {
        printf("%d is a prime number\n", x);
    }
    else
    {
        printf("%d is not a prime number\n", x);
    }
    return 0;
}
