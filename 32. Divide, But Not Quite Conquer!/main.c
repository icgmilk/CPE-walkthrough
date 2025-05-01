#include <stdio.h>
#include <string.h>

#define MAX 1000
int main()
{
    int n, m;
    
    while(scanf("%d %d", &n, &m) != EOF){
        if(n == 0 || m == 0 || m == 1){
            printf("Boring!\n");
            continue;
        }
        
        int isBoring = 0;
        int devideSequence[MAX] = {0};
        devideSequence[0] = n;
        int sequenceLength = 1;
        
        while(n != 1){
            if(n % m == 0){
                devideSequence[sequenceLength] = n / m;
                n /= m;
            }
            else{
                isBoring = 1;
                break;
            }
            sequenceLength++;
        }
        
        if(isBoring){
            printf("Boring!\n");
        }
        else{
            for(int i = 0; i < sequenceLength-1; i++){
                printf("%d ", devideSequence[i]);
            }
            printf("%d\n", devideSequence[sequenceLength-1]);
        }
        
        
    }
    
}
