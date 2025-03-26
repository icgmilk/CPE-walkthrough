#include <stdio.h>

int summing_digits(int n){
    int sum = 0;
    
    while(n != 0){
        sum += n%10;
        n /= 10;
    }
    
    if(sum >= 10){
        return summing_digits(sum);
    }
    else{
        return sum;
    }
}

int main(){
    int n;
    while(scanf("%d", &n) && n != 0){
        printf("%d\n", summing_digits(n));
    }
}