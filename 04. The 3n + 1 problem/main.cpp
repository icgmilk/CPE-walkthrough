#include <bits//stdc++.h>

using namespace std;

int algorithm(int number){
    int cycleLength = 1;
    
    while(number != 1){
        if(number%2 == 1){
            number = number*3 + 1;
        }
        else{
            number /= 2;
        }
        cycleLength++;
    }
    
    return cycleLength;
}

int solve(int i, int j){
    int maxCycleLength = 0;
    
    if(i > j){
        swap(i, j);
    }
    
    for(int temp = i; temp <= j; temp++){
        if(maxCycleLength < algorithm(temp)){
            maxCycleLength = algorithm(temp);
        }
    }
    
    return maxCycleLength;
}

int main(){
    int i, j;
    while(cin >> i >> j){
        cout << i << ' ' << j << ' ' << solve(i, j) << endl;
    }
}
