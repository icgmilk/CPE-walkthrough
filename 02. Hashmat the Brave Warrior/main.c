#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int a, b;
    while(scanf("%lld%lld", &a, &b) != EOF){
    printf("%lld\n", abs(a-b));
    }
}