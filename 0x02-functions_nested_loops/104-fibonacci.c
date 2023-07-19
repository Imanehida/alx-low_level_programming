#include <stdio.h>

int fibonacci_sequence(int n) {
    int a = 1, b = 2, c;
    if (n == 1) {
        printf("%d", a);
        return a;
    }
    if (n == 2) {
        printf("%d, %d", a, b);
        return b;
    }

    printf("%d, %d, ", a, b);
    for (int i = 3; i <= n; i++) {
        c = a + b;
        if (i != n)
            printf("%d, ", c);
        else
            printf("%d\n", c);
        a = b;
        b = c;
    }

    return c;
}

int main() {
    int n = 98;
    fibonacci_sequence(n);
    return 0;
}
