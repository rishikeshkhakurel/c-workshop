#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            printf("Skipping i = %d\n", i);
            continue; 
        }
        printf("%d ", i);
    }
    return 0;
}
