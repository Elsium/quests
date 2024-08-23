#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    char c;
    if (scanf("%d%c", &n, &c) != 2 || c != '\n') {
        printf("n/a\n");
        return 1;
    }

    if (n < 0) {
        printf("n/a\n");
        return 1;
    }

    printf("%d\n", fibonacci(n));
    return 0;
}

int fibonacci(int n) {
    if (n < 0) return 0;
    if (n <= 1) return n;
    return fibonacci(n - 2) + fibonacci(n - 1);
}