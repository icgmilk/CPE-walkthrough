#include <iostream>

using namespace std;

int summingDigits(int number){
    int sum = 0;
    
    while(number != 0){
        sum += number % 10;
        number /= 10;
    }
    
    if(sum >= 10){
        return summingDigits(sum);
    }
    else{
        return sum;
    }
}

int main(){
    int number;

    while(true){
        cin >> number;
        
        if(number == 0){
            break;
        }
        else{
            cout << summingDigits(number) << endl;
        }
    }   
}
