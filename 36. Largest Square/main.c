#include <stdio.h>
#include <string.h>

int outOfBounds(int x, int y, int m, int n){ 
    return x < 0 || x >= m || y < 0 || y >= n;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int m, n, q;
        scanf("%d %d %d", &m, &n, &q);
        printf("%d %d %d\n", m, n, q);

        char square[m][n];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                scanf(" %c", &square[i][j]);
            }
        }
        
        while(q--){
            int r, c;
            scanf("%d %d", &r, &c);

            int unitLength = 0;

            while(1){
                int valid = 1;

                for(int i = r - unitLength; i <= r + unitLength && valid; i++){
                    for(int j = c - unitLength; j <= c + unitLength; j++){
                        if(outOfBounds(i, j, m, n) || square[i][j] != square[r][c]){
                            valid = 0;
                            break;
                        }
                    }
                }

                if(!valid){
                    break;
                }

                unitLength++;
            }

            printf("%d\n", unitLength * 2 - 1);
        }
    }

    return 0;
}
