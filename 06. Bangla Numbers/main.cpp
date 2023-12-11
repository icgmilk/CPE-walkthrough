#include <iostream>

using namespace std;

void bangla(long long int n){
    if(n >= 10000000){
        bangla(n/10000000);
        cout <<" kuti";
        n %= 10000000;
    }
    if(n >= 100000){
        bangla(n/100000);
        cout <<" lakh";
        n %= 100000;
    }
    if(n >= 1000){
        bangla(n/1000);
        cout <<" hajar";
        n %= 1000;
    }
    if(n >= 100){
        bangla(n/100);
        cout <<" shata";
        n %= 100;
    }
    if(n > 0){
        cout << ' ' << n;
    }
}

int main(){
    long long int n;
    int testCases = 1;
    
    while(cin >> n){
        printf("%d.", testCases);
        
        if(n > 0){
            bangla(n);
        }
        else{
            cout << ' ' << '0' << endl;
        }
        
        cout << "\n";
        testCases++;
    }
}
