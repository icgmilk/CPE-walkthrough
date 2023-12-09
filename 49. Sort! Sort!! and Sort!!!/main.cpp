#include <bits//stdc++.h>

using namespace std;

int n, m;

bool isOdd(int n){
    int num = abs(n % 2);
    return num;
}

bool cmp(int a, int b){
    if(a%m != b%m){
        return a%m < b%m;
    }
    else if(isOdd(a) != isOdd(b)){
        return isOdd(a);
    }
    else if(isOdd(a)){
        return a > b;
    }
    else{
        return a < b;
    }
    
}

int main(){

    while(cin >> n >> m && n != 0 && m != 0){
        int number[n];
        for(int i = 0; i < n; i++){
            cin >> number[i];
        }
        
        cout << n << ' ' << m << endl;
        
        sort(number, number+n, cmp);
        
        for(int i = 0; i < n; i++){
            cout << number[i] << endl;
        }
    }
    cout << 0 << ' ' << 0 << endl;
}