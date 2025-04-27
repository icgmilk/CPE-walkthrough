#include <stdio.h>
#include <math.h>

int Prime(int n){
    if(n == 1 || n == 0){
        return 0;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    
    return 1;
}

int Emrip(int n){
    int temp_n = n;
    int reverse = 0;
    while(temp_n != 0){
        reverse = reverse * 10 + temp_n % 10;
        temp_n /= 10;
    }
    if(n == reverse){
        return 0;
    }
    else{
        return Prime(reverse);
    }
    
}


int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        int isPrime = Prime(n), isEmrip = Emrip(n);
        if(isPrime&&isEmrip){
            printf("%d is emirp.\n", n);
        }
        else if(isPrime){
            printf("%d is prime.\n", n);
        }
        else{
            printf("%d is not prime.\n", n);
        }
    }
}
