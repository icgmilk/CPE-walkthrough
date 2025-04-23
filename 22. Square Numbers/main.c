#include <stdio.h>
#include <math.h>

int main(){

    int a, b;
    
    while(1){
        scanf("%d%d", &a, &b);
        if(a==0 && b == 0){
            break;
        }
        int square_maxNumber = sqrt(b), square_minNumber = sqrt(a - 1);
        printf("%d\n", square_maxNumber - square_minNumber);
    }
}