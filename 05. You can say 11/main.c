#include <stdio.h>

int main(){
    char num[1000];
    while(scanf("%s", num) && num[0] != '0'){
        int odd = 0, even = 0;
        int len = strlen(num);
        for(int i = len-1; i >= 0; i-=2){
            odd += (num[i]-'0');
        }
        for(int i = len-2; i >= 0; i-=2){
            even += (num[i]-'0');
        }
        
        if(abs(odd-even) == 11 || abs(odd-even) == 0){
            printf("%s is a multiple of 11.\n", num);
        }
        else{
            printf("%s is not a multiple of 11.\n", num);
        }
    }
}