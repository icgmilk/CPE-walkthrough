#include <bits//stdc++.h>

using namespace std;
#define MAX 100

void decToBin(int number){
    int onesCount = 0, arraySize = 0;;
    int binaryArray[MAX];
    while(number != 0){
        if(number % 2 == 1){
            binaryArray[arraySize] = 1;
            onesCount++;
        }
        else{
            binaryArray[arraySize] = 0;
        }
        
        arraySize++;
        number /= 2;
    }
    for(int i = arraySize - 1; i >= 0; i--){
        cout << binaryArray[i];
    }
    cout << " is " << onesCount << " (mod 2)." << endl;
}

int main(){
    int I;
    
    while(true){
        cin >> I;       
        if(I == 0){
            break;
        }
        
        cout << "The parity of ";
        decToBin(I);
    }
}
