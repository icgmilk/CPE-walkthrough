# Common Permutation

題目連結:[Common Permutation](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2307)
![11-1](pic/11-1.jpg)

題目會給兩個字串(只有小寫字母)，要印出兩個字串重新排序後的的共同子字串。

光看定義不太好理解，直接拿測資舉例:

輸入 walking, down ，重新排序變 agiklnw dnow，兩個字串共通字母為 nw。
遇到兩邊字母數不同取最小的，例入遇到左邊有3個n右邊兩個n的情況，要輸出兩個n。

首先紀錄兩邊字串長度。用長度 26 的陣列紀錄各個字母的出現次數。
```C
int lenA = strlen(a), lenB = strlen(b);
        int letterCountA[26] = {0}, letterCountB[26] = {0};
        
        for(int i = 0; i < lenA; i++){
            letterCountA[a[i] - 'a']++;
        }
        
        for(int i = 0; i < lenB; i++){
            letterCountB[b[i] - 'a']++;
        }
```

再來從a開始，找到兩個字串都有的字母，檢查誰比較小取最小的輸出。直到 26 個字母被走訪完。

```C
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
```

```C
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

```