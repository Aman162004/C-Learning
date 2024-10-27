#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    int lastdigit = 0;
    int sum = 0;
    while (x!=0)
    {
        lastdigit = lastdigit%10;
        x = x/10;
            if (lastdigit%2==0)
            {
                sum = sum + lastdigit;
                printf("The sum of all even digits is %d",sum);
            }
            
    }
    
    return 0;
}
