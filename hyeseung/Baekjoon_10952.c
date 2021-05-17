#include <stdio.h>

int main() {
    int a = 1, b = 1;
    while (a != 0 && b != 0) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}