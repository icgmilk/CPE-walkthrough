#include <bits//stdc++.h>

using namespace std;

int main(){
    string number;
    while(cin >> number && number != "0"){
        int odd_sum = 0;
        int even_sum = 0;
        int length = number.length();
        
        for(int i = length-1; i >= 0; i-=2){
            odd_sum += (number[i] - '0');
        }
        
        for(int i = length-2; i >= 0; i-=2){
            even_sum += (number[i] - '0');
        }
        
        cout << number;
        if(abs(odd_sum - even_sum) % 11 == 0){
            cout << " is a multiple of 11." << endl;
        }
        else{
            cout << " is not a multiple of 11." << endl;
        }
    }
}