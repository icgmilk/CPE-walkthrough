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
        
        int matrix[n*n];
        int isSym = 1;
        for(int j = 0; j < n*n; j++){
            scanf("%d", &matrix[j]);
        }
        
        for(int j = 0; j < n*n/2; j++){
            if(matrix[j] != matrix[(n*n-1) - j]){
                isSym = 0;
                break;
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
