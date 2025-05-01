#include <stdio.h>
#include <string.h>

int main(){
    char a[1001], b[1001];
    
    while(gets(a) && gets(b)){
        int lenA = strlen(a), lenB = strlen(b);
        int letterCountA[26] = {0}, letterCountB[26] = {0};
        
        for(int i = 0; i < lenA; i++){
            letterCountA[a[i] - 'a']++;
        }
        
        for(int i = 0; i < lenB; i++){
            letterCountB[b[i] - 'a']++;
        }
        
        int min;
        
        for(int i = 0; i < 26; i++){
            if(letterCountA[i] && letterCountB[i]){
                if(letterCountA[i] >= letterCountB[i]){
                    min = letterCountB[i];
                }
                else{
                    min = letterCountA[i];
                }
                
                for(int j = 0; j < min; j++){
                    printf("%c", i + 'a');
                }
            }
        }
        printf("\n");
    }
    return 0;
}
