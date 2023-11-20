/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

#define MAXstreetNumber 30000

int main(){
    int testCase;
    
    cin >> testCase;
    
    while(testCase--){
        int reletiveNumber, streetNumber[MAXstreetNumber], minAddress, totalDistances = 0;
        cin >> reletiveNumber;
        
        for(int i = 0; i < reletiveNumber; i++){
            cin >> streetNumber[i];
        }
        sort(streetNumber, streetNumber + reletiveNumber);
        

        if(reletiveNumber % 2 == 0){
            minAddress = streetNumber[((reletiveNumber / 2) + (reletiveNumber / 2 - 1)) / 2];
        }
        else{
            minAddress = streetNumber[reletiveNumber / 2];
        }
        
        for(int i = 0; i < reletiveNumber; i++){
            totalDistances += abs(minAddress - streetNumber[i]);
        }
        
        cout << totalDistances << endl;
    }
}