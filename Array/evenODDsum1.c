#include <stdio.h>

int main(int argc, char const *argv[]) {
    int arr[7] = {2, 5, 3, 8, 1, 9, 7};
    int evensum = 0;
    int oddsum = 0;

    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2 == 0) {
            evensum += arr[i];
        } else {
            oddsum += arr[i];
        }
    }

    printf("Difference: %d\n", evensum - oddsum);

    return 0;
}