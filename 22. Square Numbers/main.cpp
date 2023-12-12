//計算a與b之間的平方數=0到b平方數-0到a平方數 (0 < a <= b) 
//考慮重複計算到a本身，所以a要減1 
#include <bits//stdc++.h>

using namespace std;

int main(){
    int a, b;
    
    while(true){
        cin >> a >> b;
        
        if(a == 0 && b == 0){
            break;
        }
        int square_maxNumber = sqrt(b), square_minNumber = sqrt(a - 1);
        printf("%d\n", square_maxNumber - square_minNumber);
    }
}
