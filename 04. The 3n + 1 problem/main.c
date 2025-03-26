#include <stdio.h>

int algo_cycle_len(int n, int cycle_len){
    if (n == 1){
        cycle_len++;
        return cycle_len;
    }
    else if(n % 2 == 1){
        cycle_len++;
        return algo_cycle_len(n*3 + 1, cycle_len);
    }
    else{
        cycle_len++;
        return algo_cycle_len(n/2, cycle_len);
    }
}

int main(){
    int i, j;
    
    while(scanf("%d%d", &i, &j) != EOF){
        int temp;
        if(j < i){
            temp = i;
            i = j;
            j = temp;
        }
        
        int max_cycle_len = 0, cycle_len;
        for(i; i<= j; i++){
            cycle_len = algo_cycle_len(i, 0);
            if(max_cycle_len < cycle_len){
                max_cycle_len = cycle_len;
            }
        }
        printf("%d %d %d\n", i, j, max_cycle_len);
    }
}
