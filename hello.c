#include <stdio.h>

int main() {
    printf("Jello, World!");
    return 0;
}

#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d - %d = %d\n", x, y, x - y);

    return 0;
}

#include <stdio.h>

int main() {
    int X, Y;

    scanf("%d %d", &X, &Y);

    printf("X + Y = %d\n", X + Y);
    printf("X * Y = %d\n", X * Y);
    printf("X - Y = %d\n", X - Y);

    return 0;
}

#include <stdio.h>

int main() {
    int A, B, C, D, X;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    X = (A * B) - (C * D);
    printf("Difference = %d\n", X);

    return 0;
}

#include <stdio.h>

int main() {
    long long int A, B, C, D, X;

    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    X = (A * B) - (C * D);

    printf("Difference = %lld\n", X);

    return 0;
}