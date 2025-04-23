#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int s, d;
        scanf("%d%d", &s, &d);
        int a = (s+d)/2;
        int b = s-a;
        
        if(s < d || (s+d) % 2 != 0){
            printf("impossible\n");
        }
        else{
            printf("%d %d\n", a, b);
        }
    }
}
