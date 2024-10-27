#include <stdio.h>
void sum(int x){
    int sum=0;
    for (int i = 0; i <= x; i++)
    {
        sum = sum + i;
    }
    printf("%d\n",sum);
}
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    sum(x);
    return 0;
}
