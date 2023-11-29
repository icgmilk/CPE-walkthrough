#include <bits//stdc++.h>

using namespace std;

int totalGCD(int number){
    int g = 0;
    for(int i = 1; i < number; i++){
        for(int j = i+1; j <= number; j++){
            g += __gcd(i, j);
        }
    }
    return g;
}

int main(){
    int n;
    while(cin >> n && n != 0){
        cout << totalGCD(n) << endl;
    }
    
}