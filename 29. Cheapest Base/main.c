#include <stdio.h>

int get_cost(int number, int base, int cost[36]) {
    if (number == 0) return cost[0];
    
    int total = 0;
    while (number > 0) {
        int digit = number % base;
        total += cost[digit];
        number /= base;
    }
    return total;
}

int main() {
    int c;
    scanf("%d", &c);
    
    for (int case_id = 1; case_id <= c; case_id++) {
        int cost[36];
        for (int i = 0; i < 36; i++) {
            scanf("%d", &cost[i]);
        }

        int q;
        scanf("%d", &q);

        printf("Case %d:\n", case_id);

        while (q--) {
            int num;
            scanf("%d", &num);

            int min_cost = 9999999;
            int result[36], rsize = 0;

            for (int base = 2; base <= 36; base++) {
                int curr = get_cost(num, base, cost);
                if (curr < min_cost) {
                    min_cost = curr;
                    rsize = 0;
                    result[rsize++] = base;
                } else if (curr == min_cost) {
                    result[rsize++] = base;
                }
            }

            printf("Cheapest base(s) for number %d:", num);
            for (int i = 0; i < rsize; i++) {
                printf(" %d", result[i]);
            }
            printf("\n");
        }
		if(case_id != c){
			printf("\n");
		}
        
    }
}
