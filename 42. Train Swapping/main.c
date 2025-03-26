#include <stdio.h>

int swap_count(int train[], int train_len){
    int swap_count = 0, temp;
    for(int i = 0; i < train_len; i++){
        for(int j = i+1; j < train_len; j++){
            if(train[i] > train[j]){
                temp = train[i];
                train[i] = train[j];
                train[j] = temp;
                swap_count++;
            }
        }
    }
    return swap_count;
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int train_len;
        scanf("%d", &train_len);
        
        int train[train_len];
        for(int i = 0; i < train_len; i++){
            scanf("%d", &train[i]);
        }
        
        int S = swap_count(train, train_len);
        
    printf("Optimal train swapping takes %d swaps.\n", S);
    }
}
