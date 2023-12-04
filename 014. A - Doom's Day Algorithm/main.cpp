/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

#define MAX 20

int main(){
    char weeks[7][MAX] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int testCount;
    cin >> testCount;
    while(testCount--){
        int inputMonth, inputDay, mouthToDay = 0;
        cin >> inputMonth >> inputDay;
        
        if(inputMonth > 1){
            for(int i = 0; i < inputMonth-1; i++){
                mouthToDay += months[i];
            }
            cout << weeks[(mouthToDay + inputDay) % 7] << endl;
        }
        else{
            cout << weeks[inputDay % 7] << endl;
        }
    }
}

