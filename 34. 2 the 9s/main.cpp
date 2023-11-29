#include <bits//stdc++.h>

using namespace std;

int main(){
    string number;
    
    while(cin >> number && number != "0"){
        int sum = 0;
        
        for(int i = 0; i < number.length(); i++){
            sum += (number[i] - '0');
        }
        
        int degree = 1;
        
        while(sum > 9){
            int temp = sum;
            sum = 0;
            
            while(temp != 0){
                sum += temp % 10;
                temp /= 10;
            }
            degree++;
        }
        
        if(sum != 9){
            cout << number << " is not a multiple of 9." << endl;
        }
        else{
            cout << number << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
        }
    }
}