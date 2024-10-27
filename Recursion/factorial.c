#include <stdio.h>
int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("Factorial of %d is %d",n,fact);
    return 0;
}
