#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    while (t--) {
        char note[205];
        int finger[10] = {0};
        int before[10] = {0};
        
        gets(note);

        for (int i = 0; i < strlen(note); i++) {
            int isHold[10] = {0};

            switch (note[i]) {
                case 'c':
                    for (int j = 1; j <= 3; j++) isHold[j] = 1;
                    for (int j = 6; j <= 9; j++) isHold[j] = 1;
                    break;
                case 'd':
                    for (int j = 1; j <= 3; j++) isHold[j] = 1;
                    for (int j = 6; j <= 8; j++) isHold[j] = 1;
                    break;
                case 'e':
                    for (int j = 1; j <= 3; j++) isHold[j] = 1;
                    for (int j = 6; j <= 7; j++) isHold[j] = 1;
                    break;
                case 'f':
                    for (int j = 1; j <= 3; j++) isHold[j] = 1;
                    isHold[6] = 1;
                    break;
                case 'g':
                    for (int j = 1; j <= 3; j++) isHold[j] = 1;
                    break;
                case 'a':
                    for (int j = 1; j <= 2; j++) isHold[j] = 1;
                    break;
                case 'b':
                    isHold[1] = 1;
                    break;
                case 'C':
                    isHold[2] = 1;
                    break;
                case 'D':
                    for (int j = 0; j <= 3; j++) isHold[j] = 1;
                    for (int j = 6; j <= 8; j++) isHold[j] = 1;
                    break;
                case 'E':
                    for (int j = 0; j <= 3; j++) isHold[j] = 1;
                    for (int j = 6; j <= 7; j++) isHold[j] = 1;
                    break;
                case 'F':
                    for (int j = 0; j <= 3; j++) isHold[j] = 1;
                    isHold[6] = 1;
                    break;
                case 'G':
                    for (int j = 0; j <= 3; j++) isHold[j] = 1;
                    break;
                case 'A':
                    for (int j = 0; j <= 2; j++) isHold[j] = 1;
                    break;
                case 'B':
                    for (int j = 0; j <= 1; j++) isHold[j] = 1;
                    break;
            }

            for (int j = 0; j < 10; j++) {
                if (before[j] == 0 && isHold[j] == 1) {
                    finger[j]++;
                }
                before[j] = isHold[j];
            }
        }

        for (int i = 0; i < 10; i++) {
            printf("%d", finger[i]);
            if (i < 9) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
