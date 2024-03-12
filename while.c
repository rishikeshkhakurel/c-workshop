#include <stdio.h>

int main() {
    int count = 1;
    printf("Using while loop:\n");
    while (count <= 5) {
        printf("%d ", count);
        count++;
    }
    return 0;
}