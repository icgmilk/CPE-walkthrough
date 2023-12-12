#include <bits//stdc++.h>

using namespace std;

int main(){
    string n; 
    while(getline(cin, n)){
        int test = 0, currentNumber = 0, maxNumber = 0;
        for(int i = 0; i < n.length(); i++){
            if(n[i] >= '0' && n[i] <= '9'){
                test += (n[i] - '0');
                currentNumber = n[i] - '0';
            }
            else if(n[i] >= 'A' && n[i] <= 'Z'){
                test += (n[i] - 'A' + 10);
                currentNumber = (n[i] - 'A' + 10);
            }
            else if(n[i] >= 'a' && n[i] <= 'z'){
                test += (n[i] - 'a' + 36);
                currentNumber = (n[i] - 'a' + 36);
            }
            
            if(maxNumber < currentNumber){
                maxNumber = currentNumber;
            } 
        }
        
        bool isPossible = false;
        for(int n = maxNumber; n <= 62; n++){
            if(test%n == 0){
                isPossible = true;
                cout << n+1 << endl;
                break;
            }
        }
        
        if(!isPossible){
            cout << "such number is impossible!" << endl;
        }
    }
}
