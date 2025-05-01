#include <stdio.h>

int main() {
    int n;
    int b2case = 1;

    while (scanf("%d", &n) != EOF) {
        int arr[100];
        int b2[10000];
        int index = 0;
        int isb2 = 1;

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] <= 0 || (i > 0 && arr[i] <= arr[i - 1])) {
                isb2 = 0;
            }
        }

        for (int i = 0; i < n && isb2; i++) {
            for (int j = i; j < n; j++) {
                b2[index++] = arr[i] + arr[j];
            }
        }

        for (int i = 0; i < index && isb2; i++) {
            for (int j = i + 1; j < index; j++) {
                if (b2[i] == b2[j]) {
                    isb2 = 0;
                    break;
                }
            }
        }

        if (isb2) {
            printf("Case #%d: It is a B2-Sequence.\n\n", b2case);
        } else {
            printf("Case #%d: It is not a B2-Sequence.\n\n", b2case);
        }

        b2case++;
    }

    return 0;
}
