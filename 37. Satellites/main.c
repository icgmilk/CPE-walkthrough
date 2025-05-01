#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI asin(1)*2.0

int main(){
    double s, a;
    char angleUnit[4];
    
    while(scanf("%lf %lf %s",&s ,&a, angleUnit) != EOF){
        s += 6440;
        
        if(!strcmp(angleUnit, "min")){
            a /= 60.0;
        }
        if (a > 180.0){
            a = 360.0 - a;
        }
        
        double arc_length = 2 * PI * s * a / 360.0; // 弧長
        double chord_length = 2 * s * sin((a / 2.0) * PI / 180.0); // 弦長
        
        printf("%lf %lf\n",arc_length, chord_length);
    }
}