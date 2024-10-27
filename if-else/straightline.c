#include <stdio.h>
int main(int argc, char const *argv[])
{
    double x1,y1,x2,y2,x3,y3;
    double m1=(y2-y1)/(x2-x1),m2=(y3-y2)/(x3-x2);
    printf("Slope of 1st line is:%d",m1);
    printf("Slope of 2nd line is:%d",m2);
    if (m1=m2)
    {
        printf("All 3 points are on straight line");
    }
    
    return 0;
}
