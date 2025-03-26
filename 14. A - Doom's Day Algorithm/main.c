#include <stdio.h>

int main(){
    int day_map[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char month_map[7][10] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"}; 
    int t;
    scanf("%d", &t);
    while(t--){
        int m, d;
        scanf("%d%d", &m, &d);
        
        int total_day = d;
        
        for(int i = 0; i < m-1; i++){
            total_day += day_map[i];
        }
        
        printf("%s\n", month_map[total_day%7]);
    }
}
