#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks[10] = {78,56,65,24,35,54,21,29,89,95};
    for (int i = 0; i < 10; i++)
    {
        if (marks[i]<35)
        {
            printf("%d ", i);
        }
        
    }
    
    return 0;
}
