#include <stdio.h>
#include <stdlib.h>

int n, m;

int isOdd(int n){
    int num = abs(n % 2);
    return num;
}

int cmp(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;

    int modx = x % m;
    int mody = y % m;

    if (modx != mody)
        return modx - mody;

    int oddx = isOdd(x);
    int oddy = isOdd(y);

    if (oddx != oddy)
        return oddy - oddx;

    if (oddx)
        return y - x;
    else
        return x - y;
}

int main(){
    while(1){
        scanf("%d %d", &n, &m);
        if(n == 0 && m == 0){
            break;
        }
        
        int number[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &number[i]);
        }
        printf("%d %d\n", n, m);

        qsort(number, n, sizeof(int), cmp);
        
        for(int i = 0; i < n; i++){
            printf("%d\n", number[i]);
        }
    }
    printf("0 0\n");
}