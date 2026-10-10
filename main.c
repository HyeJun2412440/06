#include <stdio.h>

int sumTwo(int a, int b) {
    return a + b;
}

int square(int n) {
    return n * n;
}

int get_max(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

int main(void) {
    int a = 5;
    int b = 3;

    printf("Sum: %d\n", sumTwo(a, b));
    printf("Square: %d\n", square(a));
    printf("Max: %d\n", get_max(a, b));

    return 0;
}