#include <stdio.h>

int main(){
    int s, d;
    while(scanf("%d%d", &s, &d) != EOF){
        int member = s;
        for(int i = s; s < d; s += member){
            if(s >= d){
                break;
            }
            else{
                member++;
            }
        }
        
        printf("%d\n", member);
    }