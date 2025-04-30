#include <stdio.h>
#include <string.h>

int main(){
    char str[101][101];
    int row = 0, max_col = 0;
    while(gets(str[row]) != NULL){
        if(max_col < strlen(str[row])){
            max_col = strlen(str[row]);
        }
        row++;
    }
    
    for(int i = 0; i < max_col; i++){
        for(int j = row-1; j >= 0; j--){
            if(i < strlen(str[j])){
                printf("%c", str[j][i]);
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}