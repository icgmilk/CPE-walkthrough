#include <stdio.h>

long long int target(int x, int y){
    long long int basic = 0, extra = x;
    for(int i = 1; i <= x+y; i++){
        basic += i;
    }
    return basic + extra;
    
}

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        printf("Case %d: %lld\n", i, target(x2, y2)-target(x1, y1));
    }
}
