#include <bits//stdc++.h>

using namespace std;

bool isPrime(int number){
    if(number == 1){
        return true;
    }
    else{
        for(int i = sqrt(number); i >= 2; i--){
            if(number % i == 0){
                return false;
            }
        }
        return true;
    }
    
}

int digits(int number){
    int digit = 0;
    while(number != 0){
        number /= 10;
        digit++;
    }
    return digit;
}

int reverseNumber(int number){
    int reverse = 0, index = digits(number);
    
    while(number != 0){
        reverse += number%10 * pow(10, index-1);
        number /= 10;
        index--;
    }
    
    return reverse;
}

int main(){
    int n;
    
    while(cin >> n){
        if(isPrime(n) && isPrime(reverseNumber(n)) && n != reverseNumber(n)){
            cout << n << " is emirp." << endl;
        }
        else if(isPrime(n)){
            cout << n << " is prime." << endl;
        }
        else{
            cout << n << " is not prime." << endl;
        }
    }
}