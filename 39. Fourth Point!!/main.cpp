#include <iostream>

using namespace std;

int main(){
    double xPoint[4], yPoint[4], fourthPoint_x , fourthPoint_y;
    while(cin >> xPoint[0] >> yPoint[0]){
        fourthPoint_x = 0;
        fourthPoint_y = 0;
        
        fourthPoint_x += xPoint[0];
        fourthPoint_y += yPoint[0];
        
        for(int i = 1; i < 4; i++){
            cin >> xPoint[i] >> yPoint[i];
            fourthPoint_x += xPoint[i];
            fourthPoint_y += yPoint[i];
        }
        
        int repeatPoint;
        for(int i = 0; i < 4; i++){
            for(int j = i+1; j < 4; j++){
                if(xPoint[i] == xPoint[j] && yPoint[i] == yPoint[j]){
                    repeatPoint = i;
                }
            }
        }
        
        fourthPoint_x -= xPoint[repeatPoint]*3;
        fourthPoint_y -= yPoint[repeatPoint]*3;
        
        printf("%.3f %.3f\n", fourthPoint_x, fourthPoint_y);
        
    }
    
}