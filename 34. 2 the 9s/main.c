#include <stdio.h>
#include <string.h>

int main(){
    char n[1000];
    while(1){
        gets(n);
        if(n[0] == '0'){
            break;
        }
        
        int sum = 0;
        
        for(int i = 0; i < strlen(n); i++){
            sum += (n[i] - '0');
        }
        
        int degree = 1;
        
        while(sum > 9){
            int temp_sum = sum;
            sum = 0;
            
            while(temp_sum != 0){
                sum += temp_sum % 10;
                temp_sum /= 10;
            }
            degree++;
        }
        
        if(sum != 9){
            printf("%s is not a multiple of 9.\n", n);
        }
        else{
            printf("%s is a multiple of 9 and has 9-degree %d.\n", n, degree);
        }
    }
    
    
}
