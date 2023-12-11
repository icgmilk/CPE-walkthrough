#include <bits//stdc++.h>

using namespace std;

int main(){
    string quotes;
    bool firstDobbleQuote = false;
    
    while(getline(cin, quotes)){
        int length = quotes.length();
        
        for(int i = 0; i < length; i++){
            if(quotes[i] == '"' && firstDobbleQuote == false){
                firstDobbleQuote = true;
                cout << "``";
            }
            else if(quotes[i] == '"' && firstDobbleQuote == true){
                firstDobbleQuote = false;
                cout << "''";
            }
            else{
                cout << quotes[i];
            }
        }
        cout << "\n";
    }
}
