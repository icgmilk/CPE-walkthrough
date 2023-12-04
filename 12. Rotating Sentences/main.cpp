#include <bits//stdc++.h>

using namespace std;


int main(){
    string str[100];
    int stringCount = 0;
    int maxletter = 0;
    while(getline(cin, str[stringCount])){
        if(maxletter < str[stringCount].length()){
            maxletter = str[stringCount].length();
        }
        stringCount++;
    }
    
    for(int i = 0; i < maxletter; i++){
        for(int j = stringCount-1; j >= 0; j--){
            if(i > str[j].length()-1){
                cout << ' ';
            }
            else{
                cout << str[j][i];
            }
            
        }
        cout << "\n";
    }
}
