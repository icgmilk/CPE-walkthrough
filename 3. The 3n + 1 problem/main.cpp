/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits//stdc++.h>

using namespace std;

int algorithm(int number){
    int cycleLength = 1;
    while(number != 1){
        if(number % 2 == 1){
            number = number * 3 + 1;
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
        solve(i, j);
        cout << i << ' ' << j << ' ' << solve(i, j) << endl;
    }
}