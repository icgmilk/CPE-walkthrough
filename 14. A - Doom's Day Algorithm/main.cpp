#include <iostream>

using namespace std;

#define MAX 20

int main(){
    char weeks[7][MAX] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int testCount;
    cin >> testCount;
    while(testCount--){
        int m, d, mouthToDay = 0;
        cin >> m >> d;
        
        if(m > 1){
            for(int i = 0; i < m-1; i++){
                mouthToDay += months[i];
            }
            cout << weeks[(mouthToDay + d) % 7] << endl;
        }
        else{
            cout << weeks[d % 7] << endl;
        }
    }
}

