#include <stdio.h>

int main(void) {
    int x;
    if (scanf("%d", &x) != 1) {
        return 1;
    }

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", x, i, x * i);
    }

    return 0;
}
