#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    int y;
    printf("Enter the Cost Price:\n");
    scanf("%d",&x);
    printf("Enter The Selling Price:\n");
    scanf("%d",&y);
    if (x>y)
    {
       int z;
       z=x-y;
       printf("You have a loss of:%d",z);

    }
    
    if (x<y)
    {
        int a;
        a=y-x;
        printf("You Have a profit of %d",a);
    }
    else{
        printf("No Profit Not Loss");
    }
    

    return 0;
}
