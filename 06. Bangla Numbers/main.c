#include <stdio.h>

void bangla(long long int n){
    if(n >= 10000000){
        bangla(n/10000000);
        printf(" kuti");
        n %= 10000000;
    }
    if(n >= 100000){
        bangla(n/100000);
        printf(" lakh");
        n %= 100000;
    }
    if(n >= 1000){
        bangla(n/1000);
        printf(" hajar");
        n %= 1000;
    }
    if(n >= 100){
        bangla(n/100);
        printf(" shata");
        n %= 100;
    }
    if(n > 0){
        printf(" %lld", n);
    }
    
}

int main(){
    long long int n;
    int testCases = 1;
    
    while(scanf("%lld", &n) != EOF){
    	if(testCases < 10){
    		printf("   %d.", testCases);
    	}
    	else if(testCases < 100){
    		printf("  %d.", testCases);
    	}
    	else{
    		printf(" %d.", testCases);
    	}
        
        
        if(n > 0){
            bangla(n);
        }
        else{
            printf(" 0");
        }
        
        printf("\n");
        testCases++;
    }
}

