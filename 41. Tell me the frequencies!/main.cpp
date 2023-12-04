#include <bits//stdc++.h>

using namespace std;


int main(){
    string str;
    
    while(getline(cin, str)){
        int ASCIICount[130] = {0};
        for(int i = 0; i < str.length(); i++){
            ASCIICount[str[i]]++;
        }
        
        for(int i = 1; i <= str.length(); i++){
            for(int j = 128; j >= 0; j--){
                if(ASCIICount[j] == i){
                    printf("%d %d\n", j, i);
                }
            }
        }
        printf("\n");
    }
}