#include <stdio.h>

int main(){
    double x[4], y[4];
    
    while(scanf("%lf%lf", &x[0], &y[0]) != EOF){
        double fourth_point_x = x[0], fourth_point_y = y[0];
        for(int i = 1; i < 4; i++){
            scanf("%lf", &x[i]); 
            scanf("%lf", &y[i]); 
            fourth_point_x += x[i];
            fourth_point_y += y[i];
        }
        
        int repeat_index;
        for(int i = 0; i < 4; i++){
            for(int j = i+1; j < 4; j++){
                if(x[i] == x[j] && y[i] == y[j]){
                    repeat_index = i;
                }
            }
        }
        
        fourth_point_x -= x[repeat_index]*3;
        fourth_point_y -= y[repeat_index]*3;
        
        printf("%.3f %.3f\n", fourth_point_x, fourth_point_y);
    }
}