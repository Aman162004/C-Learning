#include <stdio.h>>
int main(int argc, char const *argv[])
{
    int l;
    int b;
    printf("Enter the Length of Rectangle:",l);
    scanf("%d",&l);
    printf("Enter the Breath of Rectangle:",b);
    scanf("%d",&b);
    int p;
    p = 2 * (l+b);
    int A = l*b;
    printf("Area of Rectangle:%d\n",A);
    printf("Perimeter of Reactangle:%d\n",p);
    if (A>p)
    {
        printf("Area of Rectangle is greater than its perimeter");
    }
    

    return 0;
}
