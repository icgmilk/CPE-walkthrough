#include <bits//stdc++.h>

using namespace std;

int swapTrain(int train[], int length){
    int swapCount = 0;
    for(int i = 0; i < length; i++){
        for(int j = i; j < length; j++){
            if(train[i] > train[j]){
                swap(train[i], train[j]);
                swapCount++;
            }
        }
    }
    return swapCount;
}


int main(){
    int n;
    cin >> n;
    
    while(n--){
        int l;
        cin >> l;
        int train[l];
        
        for(int i = 0; i < l; i++){
            cin >> train[i];
        }
        
        printf("Optimal train swapping takes %d swaps.\n", swapTrain(train, l));
    }
}