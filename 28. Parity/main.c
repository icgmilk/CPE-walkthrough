#include <stdio.h>

int main(){

    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0){
            break;
        }
            
        char bin[32];
        int parity = 0, index = 0;
        while(n != 0){
            if(n % 2 == 1){
                parity++;
                bin[index] = '1';
            }
            else{
                bin[index] = '0';
            }
            n /=2 ;
            index++;
        }
        
        printf("The parity of ");
        for(int i = index-1; i >= 0; i--){
            printf("%c", bin[i]);
        }
        printf(" is %d (mod 2).\n", parity);
    }
}