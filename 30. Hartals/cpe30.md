# Hartals

題目連結:[Hartals](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=991)
![30-1](pic/30-1.jpg)

題目會給天數、政黨數與各自政黨的罷會間隔天數，若罷會那天就不能工作(但那天如果是假日就不影響)。題目要求的就是在天數內損失多少工作日(參考題目資料會比較清楚)。

這題要輸入的資料很多，處理好輸入後來看如何處理這題

```C
int days[3651] = {0};
    int hi;
    for (int i = 0; i < p; i++) {
        scanf("%d", &hi);
        for (int j = hi; j <= n; j += hi) {
            days[j-1] = 1;
        }
    }
```

假設有三個政黨，各自在隔 3, 5, 7天時罷會，我們透過迴圈執行 3 次，然後讀取各個政黨的罷會天數，再把會罷會的天數記到天數裡面(沒罷會為0, 罷會為1)。

```C
int w = 0;
for (int i = 1; i <= n; i++) {
    if (days[i-1] == 1 && (i % 7 != 6) && (i % 7 != 0)) {
        w++;
    }
}

printf("%d\n", w);
```
再紀錄損失工作天，並排除假日(星期五跟星期六)。

```C
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, p;
        scanf("%d%d", &n, &p);
        
        int days[3651] = {0};
        int hi;
        for (int i = 0; i < p; i++) {
            scanf("%d", &hi);
            for (int j = hi; j <= n; j += hi) {
                days[j-1] = 1;
            }
        }
        
        int w = 0;
        for (int i = 1; i <= n; i++) {
            if (days[i-1] == 1 && (i % 7 != 6) && (i % 7 != 0)) {
                w++;
            }
        }
        
        printf("%d\n", w);
    }
}

```