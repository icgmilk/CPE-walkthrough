#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int a, b, sum = 0;
        scanf("%d", &a);
        scanf("%d", &b);
        
        if(a % 2 == 0){
            a++;
        }
        for(int j = a; j <= b; j+=2){
            sum += j;
        }
        
        printf("Case %d: %d\n", i, sum);
    }

}