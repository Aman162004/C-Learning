#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter Your percentage:");
    scanf("%d",&x);
    /*90-100 Excellent
      80-90 Very Good
      70-80 Good
      60-70 Can Do Better
      50-60 Average
      40-50 Below Average
      Below 40 Fail
      */
    if (x>90)
    {
        printf("Excellent");
    }
    else if (x>80)
    {
        printf("Very Good");
    }
    else if (x>70)
    {
        printf("Good");
    }
    else if (x>60)
    {
        printf("Average");
    }
    else if (x>50)
    {
        printf("Below Average");
    }
    else 
    {
        printf("Fail");
    }
    
    
    return 0;
}
