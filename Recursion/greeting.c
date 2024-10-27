#include <stdio.h>
void greeting(int x){
    if (x==1) return;
    printf("Good Morning\n");
    greeting(x-1);
    return;
}int main(int argc, char const *argv[])
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    greeting(x);
    return 0;
}
