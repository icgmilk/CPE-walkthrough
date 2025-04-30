#include <stdio.h>
#include <math.h>

int main(){
    int s;
    scanf("%d", &s);
    while(s--){
        int n, i;
        double p;
        scanf("%d %lf %d", &n, &p, &i);
        if(p == 0){
            printf("0.0000\n");
            continue;
        }
        double q = 1-p;
        printf("%.4f\n", pow(q, (i-1))*p / (1-pow(q, n)));
    }
}