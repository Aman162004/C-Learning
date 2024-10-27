#include <stdio.h>
#include <string.h>
void reverse(char str[], int x, int y) {
    if (x >= y) {
        return;
    }
    char temp = str[x];
    str[x] = str[y];
    str[y] = temp;

    reverse(str, x + 1, y - 1);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reverseStringRecursive(str, 0, strlen(str) - 1);
    printf("Reversed string: %s\n", str);
    return 0;
}
