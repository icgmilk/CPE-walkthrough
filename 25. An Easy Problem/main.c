#include <stdio.h>
#include <string.h>

int main(){
    char n[63]; 
    while(gets(n) != NULL){
        int currentNumber = 0, maxNumber = 0;
        int base = 1;
        for(int i = 0; i < strlen(n); i++){
            if(n[i] >= '0' && n[i] <= '9'){
                currentNumber = n[i] - '0';
            }
            else if(n[i] >= 'A' && n[i] <= 'Z'){
                currentNumber = (n[i] - 'A' + 10);
            }
            else if(n[i] >= 'a' && n[i] <= 'z'){
                currentNumber = (n[i] - 'a' + 36);
            }
            else{
                continue;
            }
            maxNumber += currentNumber;
            if(base < currentNumber){
                base = currentNumber;
            } 
        }
        for(; base < 62; base++){
            if((maxNumber % base) == 0){
                printf("%d\n", base+1);
                break;
            }
        }
        
        if(base == 62){
            printf("such number is impossible!\n");
        }
    }
}