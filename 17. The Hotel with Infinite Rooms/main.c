#include <stdio.h>

int main(){
    long long int s, d;
    while(scanf("%lld%lld", &s, &d) != EOF){
        long long int member = s;
        for(int i = s; s < d; s += member){
            if(s >= d){
                break;
            }
            else{
                member++;
            }
        }
        
        printf("%lld\n", member);
    }
}