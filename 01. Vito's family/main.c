#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 30000
void bubble_sort(int arr[], int len){
    for(int i = 0; i < len; i++){
        for(int j = i+1; j < len; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int r;
        scanf("%d", &r);

        int r_street[MAX_SIZE];

        for(int i = 0; i < r; i++){
            scanf("%d", &r_street[i]);
        }

        bubble_sort(r_street, r);
        
        int new_add;
        if(r%2 == 1){
            new_add = r_street[r/2];
        }
        else{
            new_add = (r_street[r/2]+r_street[r/2-1]) / 2;
        }
        int distance = 0;

        for(int i = 0; i < r; i++){
            distance += abs(new_add - r_street[i]);
        }

        printf("%d\n", distance);

    }
} 