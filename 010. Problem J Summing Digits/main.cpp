/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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