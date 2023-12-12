#include <bits//stdc++.h>

using namespace std;

int decToHex(int m){
    int hexNumber = 0, index = 0;
    while(m != 0){
        hexNumber += pow(16, index) * (m%10);
        m /= 10;
        index++;
    }
    return hexNumber;
}

int binaryCount(int m){
    int onesCount = 0;
    while(m != 0){
        if(m % 2 == 1){
            onesCount++;
        }
        m /= 2;
    }
    return onesCount;
}

int main(){
    int n;
    cin >> n;
    
    while(n--){
        int m;
        cin >> m;
        cout << binaryCount(m) << ' ' << binaryCount(decToHex(m)) << endl;
    }
}
