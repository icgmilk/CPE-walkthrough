#include <stdio.h>
#include <string.h>

int main(){
    char mad_str[100];
    char keyboard[48] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while(gets(mad_str) != NULL){
        int len = strlen(mad_str);
        
        for(int i = 0; i < len; i++){
            if(mad_str[i] == ' '){
                    printf(" ");
                }
            for(int j = 0; j < 47; j++){
                if(mad_str[i] == keyboard[j] || mad_str[i] - 'A' + 'a' == keyboard[j]){
                    printf("%c", keyboard[j-2]);
                }
            }
        }
        printf("\n");
    }
}