#include <stdio.h>

int main(){
    int n, letter_count = 0, ascii_count[130] = {0};
    scanf("%d", &n);
    n++;
    while(n--){
        char s[1000];
        gets(s);
        int len=strlen(s);

        for(int i = 0; i < len; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                ascii_count[s[i]-'a'+'A']++;
                letter_count++;
            }
            else{
                ascii_count[s[i]]++;
                letter_count++;
            }
        }
    }
    
    for(int i = letter_count; i >= 1; i--){
        for(int j = 'A'; j <= 'Z'; j++){
            if(ascii_count[j]==i){
                printf("%c %d\n", j, ascii_count[j]);
            }
        }
    }
}
