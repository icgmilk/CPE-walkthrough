#include <bits//stdc++.h>

using namespace std;

int main(){
    int fib[40] = {0, 1};
    for(int i = 2; i < 40; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    int testCases;
    cin >> testCases;    
    while(testCases--){
        int numbers;
        bool isFibBase = false;
        cin >> numbers;
        cout << numbers << " = ";
        
        for(int i = 39; i > 1; i--){
            if(numbers >= fib[i]){
                cout << '1';
                numbers -= fib[i];
                isFibBase = true;
            }
            else if(isFibBase == true){
                cout << '0';
            }
        } 
        cout << " (fib)" << endl;
    }
}
