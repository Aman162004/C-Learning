#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=100;
    for (int i = 1; i <=n; i++)
    {
        printf("%d ",a);
        a=a-3;
    }
    
    return 0;
}
