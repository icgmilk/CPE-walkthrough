#include <stdio.h>
#include <string.h>

int main(){
    char str[1001];
    
    while(gets(str)){
        int ASCIICount[130] = {0};
        for(int i = 0; i < strlen(str); i++){
            ASCIICount[str[i]]++;
        }
        
        for(int i = 1; i <= strlen(str); i++){
            for(int j = 128; j >= 0; j--){
                if(ASCIICount[j] == i){
                    printf("%d %d\n", j, i);
                }
            }
        }
        printf("\n");
    }
}