#include <stdio.h>

int main() {
    int count = 1;
    printf("Using do-while loop:\n");
    do {
        printf("%d ", count);
        count++;
    } while (count <= 5);
    return 0;
}
