#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x,y;
    printf("Enter the Coordinate:\n");
    scanf("%d %d",&x,&y);
    if (x==0 && y==0)
    {
        printf("Given Point is on Origin");
    }
    else if (x==0)
    {
        printf("Given Point is on y-axis");
    }
    else if (y==0)
    {
        printf("Given Point is on x-axis");
    }
    else{
        printf("Given point lies on 2D plane");
    }
    return 0;
}
