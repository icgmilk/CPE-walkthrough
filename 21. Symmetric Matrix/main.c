#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int n;
        char tempN, tempE;
        scanf(" %c", &tempN);
        scanf(" %c", &tempE);
        scanf(" %d", &n);
        
        int matrix[n][n];
        int isSym = 1;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
                if (matrix[i][j] < 0) {
                    isSym = 0;
                }
            }
        }
        
        if (isSym) {
            for (int i = 0; i < n && isSym; i++) {
                for (int j = 0; j < n; j++) {
                    if (matrix[i][j] != matrix[n-1-i][n-1-j]) {
                        isSym = 0;
                        break;
                    }
                }
            }
        }
        
        if(isSym){
            printf("Test #%d: Symmetric.\n", i);
        }
        else{
            printf("Test #%d: Non-symmetric.\n", i);
        }
    }

}
