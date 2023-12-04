#include <bits//stdc++.h>

using namespace std;


int main(){
    string a, b;
    
    while(cin >> a >> b){
        int lenA = a.length();
        int lenB = b.length();
        int letterCountA[26] = {0}, letterCountB[26] = {0};
        
        for(int i = 0; i < lenA; i++){
            letterCountA[a[i] - 'a']++;
        }
        
        for(int i = 0; i < lenB; i++){
            letterCountB[b[i] - 'a']++;
        }
        
        for(int i = 0; i < 26; i++){
            if(letterCountA[i] != 0 && letterCountB[i] != 0){
                if(letterCountA[i] < letterCountB[i]){
                    for(int j = 0; j < letterCountA[i]; j++){
                        printf("%c", i + 'a');
                    }
                }
                else{
                    for(int j = 0; j < letterCountB[i]; j++){
                        printf("%c", i + 'a');
                    }
                }
            }
        }
        cout << "\n";
    }
}