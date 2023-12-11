#include <bits//stdc++.h>

using namespace std;

int main(){
    int input, ACIIListCount[150] = {0}, letterCount = 0;
    cin >> input;
    cin.ignore();
    
    while(input--){
        string str;
        getline(cin, str);

        for(int i = 0; i < str.length(); i++){
            if (str[i] >= 'a' && str[i] <= 'z'){
                ACIIListCount[str[i] - 'a' + 'A']++;
                letterCount++;
            }
            else{
                ACIIListCount[str[i]]++;
                letterCount++;
            }
        }
    }
    
    for(int i = letterCount; i >= 1; i--){
        for(char j = 'A'; j <= 'Z'; j++){
            if(i == ACIIListCount[j]){
                cout << j << ' ' << ACIIListCount[j] << endl;
            }
        }
    }
}
