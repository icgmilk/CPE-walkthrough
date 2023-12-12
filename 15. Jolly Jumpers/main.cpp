#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int numberArray[n], jollyArray[n-1];
        
        for(int i = 0; i < n; i++){
            cin >> numberArray[i];
        }
        
        for(int i = 0; i < n-1; i++){
            jollyArray[i] = abs(numberArray[i] - numberArray[i+1]);
        }
        
        sort(jollyArray, jollyArray+(n-1));
        
        bool isJolly = true;
        
        for(int i = 0; i < n-2; i++){
            if(jollyArray[i]+1 != jollyArray[i+1]){
                isJolly = false;
                break;
            }
        }
        
        if(isJolly){
            cout << "Jolly" << endl;
        }
        else{
            cout << "Not jolly" << endl;
        }
    }   
}
