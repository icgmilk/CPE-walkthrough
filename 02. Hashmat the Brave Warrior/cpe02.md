# Hashmat the Brave Warrior

題目連結:[Hashmat the Brave Warrior](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=996)
![2-1](pic/2-1.jpg)

這題在 cpe 1星題中算特別簡單的題目，只要回傳兩個值相減的絕對值即可。
但在測資中可能帶有小陷阱: 在 input 裡面有說輸入的值不超過 2^32(4294967296)，但 int 是有號數，範圍會在 -2^31 到 2^31 – 1 之間，代表若測資輸入邊界值就有可能造成 overflow 導致結果錯誤。
在這邊我們可以宣告 long long int。範圍會到-2^63 到 2^63 – 1 之間。
==在遇到 int 不夠塞時 `long long int` 通常可以無腦解決(無號可以用`unsigned long long int`)，但是若題目給的數值範圍超過就不行，得用大數的處理方式==
另外要注意 scanf 到 'EOF' 才終止，這類型的輸入方式在很多題目都很常見。

```C
#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int a, b;
    while(scanf("%lld%lld", &a, &b) != EOF){
    printf("%lld\n", abs(a-b));
    }
}
```