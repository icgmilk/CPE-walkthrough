# 2 the 9s

題目連結:[2 the 9s](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1863)
![34-1](pic/34-1.jpg)

這題會給你數字，要判斷是否為 9 的倍數，以及判斷遞迴深度。

這題有說我們可以用位數相加來判斷是否為 9 的倍數，由於輸入數字過大所以我們要用字串讀入再轉換。
```C
gets(n);
if(n[0] == '0'){
    break;
}

int sum = 0;

for(int i = 0; i < strlen(n); i++){
    sum += (n[i] - '0');
}
```

再重複執行位數相加，直到 sum <= 9(類似Summing Digits的遞迴方式)，並記錄遞迴深度。若 sum == 9代表是9的倍數。

```C
int degree = 1;

while(sum > 9){
    int temp_sum = sum;
    sum = 0;

    while(temp_sum != 0){
        sum += temp_sum % 10;
        temp_sum /= 10;
    }
    degree++;
}

if(sum != 9){
    printf("%s is not a multiple of 9.\n", n);
}
else{
    printf("%s is a multiple of 9 and has 9-degree %d.\n", n, degree);
}
```