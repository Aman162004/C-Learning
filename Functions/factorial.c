#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Factorial of %d is %d\n", x, factorial(x));
    return 0;
}
