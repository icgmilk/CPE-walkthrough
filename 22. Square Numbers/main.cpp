#include <bits//stdc++.h>

using namespace std;

int main(){
    int minimum, maximum;
    
    while(true){
        cin >> minimum >> maximum;
        
        if(minimum == 0 && maximum == 0){
            break;
        }
        int square_maxNumber = sqrt(maximum), square_minNumber = sqrt(minimum - 1);
        printf("%d\n", square_maxNumber - square_minNumber);
    }
}