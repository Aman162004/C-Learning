#include <stdio.h>
void decreasing(int x){
    if(x==0) return;
    printf("%d\n",x);
    decreasing(x-1);
    return;
}
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter the value of x");
    scanf("%d",&x);
    decreasing(x);
    return 0;
}
