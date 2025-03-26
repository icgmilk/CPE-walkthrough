#include <stdio.h>

int main(){
    int fib[45];
    fib[0] = 0, fib[1] = 1, fib[2] = 1;
    
    for(int i = 3; i <= 45; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    int n;
    scanf("%d", &n);
    
    while(n--){
        int num, flag = 0;
        scanf("%d", &num);
        printf("%d = ");
        
        for(int i = 45; i > 1; i--){
            if(num >= fib[i]){
                printf("1");
                num -= fib[i];
                flag = 1;
            }
            else if(num < fib[i] && flag == 1){
                printf("0");
            }
        }
        printf(" (fib)\n");
    }
}