#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        int numberArray[n];
        int diffFound[n];
        memset(diffFound, 0, sizeof(diffFound));

        for(int i = 0; i < n; i++){
            scanf("%d", &numberArray[i]);
        }

        for(int i = 0; i < n - 1; i++){
            int diff = abs(numberArray[i] - numberArray[i + 1]);
            if(diff >= 1 && diff < n){
                diffFound[diff] = 1;
            }
        }

        int isJolly = 1;
        for(int i = 1; i < n; i++){
            if(!diffFound[i]){
                isJolly = 0;
                break;
            }
        }
        if(isJolly){
            printf("Jolly\n");
        }
        else{
            printf("Not jolly\n");
        }
    }   
}
