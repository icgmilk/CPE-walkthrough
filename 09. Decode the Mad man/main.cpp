#include <bits//stdc++.h>

using namespace std;

int main(){
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    
    string encodeMessage;
    while(getline(cin, encodeMessage)){
        string decodeMessage = "";
        
        for(int i = 0; i < encodeMessage.length(); i++){
            if(encodeMessage[i] >= 'A' && encodeMessage[i] <= 'Z'){
                encodeMessage[i] = encodeMessage[i] - 'A' + 'a';
            }
                     
            if(encodeMessage[i] == ' '){
                decodeMessage += ' ';
            }
            else if(encodeMessage[i] == '\n'){
                decodeMessage += '\n';
            }
            else{
                for(int j = 0; j < keyboard.length(); j++){
                    if(encodeMessage[i] == keyboard[j]){
                        decodeMessage += keyboard[j-2];
                        break;
                    }
                }
            }
        }
        cout << decodeMessage << endl;
	}
}
