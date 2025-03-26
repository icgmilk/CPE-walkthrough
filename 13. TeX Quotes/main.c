#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    int len, flag = 0;
    while(gets(s) != NULL){
        len = strlen(s);
        for(int i = 0; i < len; i++){
            if(s[i] == '"' && flag == 0){
                printf("``");
                flag = 1;
            }
            else if(s[i] == '"' && flag == 1){
                printf("''");
                flag = 0;
            }
            else{
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }

    return 0;
}