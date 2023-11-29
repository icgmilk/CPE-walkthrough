#include <bits//stdc++.h>

using namespace std;
#define MAX 1000

int binToDec(string binary){
    int binaryLength = binary.length();
    int decmial = 0, index = 0;
    for(int i = binaryLength-1; i >= 0; i--){
        decmial += (binary[i] - '0') * pow(2, index);
        index++;
    }
    
    return decmial;
}


int main(){
    int n;
    cin >> n;
    
    for(int p = 1; p <= n; p++){
        string s1, s2;
        cin >> s1 >> s2;
        
        int S1 = binToDec(s1);
        int S2 = binToDec(s2);
        
        bool isLove = false;
        
        if(__gcd(S1, S2) != 1){
            isLove = true;
        }
        
        
        cout << "Pair #" << p <<": ";
        
        if(isLove == true){
            cout << "All you need is love!" << endl;
        }
        else{
            cout << "Love is not all you need!" << endl;
        }
    }
}