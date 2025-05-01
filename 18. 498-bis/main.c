#include <stdio.h>

int a[1000000];

int derivative(int x, int max) {
    long long sum = 0;
    int e = 1;

    for (int i = max - 2; i >= 0; i--) {
        sum += a[i] * (max - i - 1) * e;
        e *= x;
    }

    return sum;
}

int main() {
    int x;

    while (scanf("%d", &x) != EOF) {
        int n = 0;
        while (1) {
            scanf("%d", &a[n]);
            char ch = getchar();
            n++;
            if (ch == '\n') break;
        }

        printf("%d\n", derivative(x, n));
    }

    return 0;
}
