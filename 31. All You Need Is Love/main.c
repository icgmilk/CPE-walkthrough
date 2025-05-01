#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 1000

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int binToDec(char binary[]){
    int binaryLength = strlen(binary);
    int decmial = 0, index = 0;
    for(int i = binaryLength-1; i >= 0; i--){
        decmial += (binary[i] - '0') * pow(2, index);
        index++;
    }
    
    return decmial;
}


int main(){
    int n;
    scanf("%d", &n);

    for(int p = 1; p <= n; p++){
        char s1[31], s2[31];
        scanf("%s %s",s1, s2);
        
        int S1 = binToDec(s1);
        int S2 = binToDec(s2);
        
        int isLove = 0;
        
        if(gcd(S1, S2) != 1){
            isLove = 1;
        }
        printf("Pair #%d: ", p);
        
        if(isLove == 1){
            printf("All you need is love!\n");
        }
        else{
            printf("Love is not all you need!\n");
        }
    }
}