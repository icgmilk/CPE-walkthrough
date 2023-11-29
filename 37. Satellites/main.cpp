#include <bits//stdc++.h>

using namespace std;
#define PI asin(1)*2.0

int main(){
    double s, a;
    string angleUnit;
    
    while(cin >> s >> a >> angleUnit){
        s += 6440;
        
        if(angleUnit == "deg"){
            a *= PI / 180;
        }
        
        printf("%f %f\n", s*a, sqrt(2*s*s - 2*s*s*cos(a)));
    }
}