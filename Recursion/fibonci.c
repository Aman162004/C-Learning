#include <stdio.h>
int fibonacci(int x){
    if(x<=2) return 1;
    return fibonacci(x-1) + fibonacci (x-2);
}
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter the value of x");
    scanf("%d",&x);
    int fib = fibonacci(x);
    printf("%d",fibonacci);
    return 0;
}
