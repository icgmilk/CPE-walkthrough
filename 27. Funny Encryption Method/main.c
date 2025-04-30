#include <stdio.h>
#include <math.h>

int decToHex(int m){
    int hex = 0, index = 0;
    while(m != 0){
        hex += pow(16, index) * (m%10);
        m /= 10;
        index++;
    }
    return hex;
}

int binaryCount(int m){
    int onesCount = 0;
    while(m != 0){
        if(m % 2 == 1){
            onesCount++;
        }
        m /= 2;
    }
    return onesCount;
}

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d %d\n", binaryCount(n), binaryCount(decToHex(n)));
    }
}