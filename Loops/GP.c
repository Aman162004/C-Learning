#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a=1;
    for (int i = 1; i <=n; i++)
    {
        printf("%d",a);
        a=a*2;
    }
    
    return 0;
}
