//�p��a�Pb�����������=0��b�����-0��a����� (0 < a <= b) 
//�Ҽ{���ƭp���a�����A�ҥHa�n��1 
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
