#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("\nBreaking the loop at i = %d", i);
            break; 
        }
        printf("%d ", i);
    }
    return 0;
}
