#include <bits//stdc++.h>

using namespace std;

int main(){
    int augend, addend;
    
    while(cin >> augend >> addend && augend != 0 || addend != 0){
        int carryOperations = 0;
        int isCarry = 0;
        
        while(augend != 0 || addend != 0){
            if(augend%10 + addend%10 + isCarry > 9){
                carryOperations++;
                isCarry = 1;
            }
            else{
                isCarry = 0;
            }
            augend /= 10;
            addend /= 10;
        }
        
        if(carryOperations == 0){
            cout << "No carry operation." << endl;
        }
        else if(carryOperations == 1){
            cout << "1 carry operation." << endl;
        }
        else{
            cout << carryOperations << " carry operations." << endl;
        }
    }
}