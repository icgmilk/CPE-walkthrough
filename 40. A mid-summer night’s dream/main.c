#include <stdio.h>
#include <string.h>

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
    int n;
    while(scanf("%d", &n) != EOF){
        int numberList[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &numberList[i]);
        }
        bubble_sort(numberList, n);
        int mid, count = 0, min;
        if(n%2 == 0){
            mid = numberList[n/2-1];
            count = 0;
            for(int i = 0; i < n; i++){
                if(numberList[i] == numberList[n/2] || numberList[i] == numberList[n/2-1]){
                    count++;
                }
            }
            min = numberList[n/2]-numberList[n/2-1]+1;
        }
        else{
            mid = (numberList[n/2]);
            for(int i = 0; i < n; i++){
                if(numberList[i] == numberList[n/2]){
                    count++;
                }
            }
            min = 1;
        }
        printf("%d %d %d\n", mid, count, min);
    }
}
