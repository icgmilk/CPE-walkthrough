#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n, p;
        scanf("%d%d", &n, &p);
        
        int days[3651] = {0};
        int hi;
        for(int i = 0; i < p; i++){
            scanf("%d", &hi);
            for(int j = hi; j <= n; j += hi){
                days[j-1] = 1;
            }
        }
        
        int w = 0;
        for(int i = 1; i <= n; i++){
            if(days[i] == 1 && i % 5 != 0 && i % 6 != 0){
                w++;
            }
        }
        
        printf("%d\n", w);
    }
}