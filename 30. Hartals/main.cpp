#include <bits//stdc++.h>

using namespace std;
#define MAX 100

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int totalDays;
        cin >> totalDays;
        
        int parity, days[totalDays+1] = {0};
        cin >> parity;
        
        for(int i = 0; i < parity; i++){
            int hartal;
            cin >> hartal;
            for(int i = 0; i <= totalDays; i += hartal){
                days[i] = 1;
            }
        }
        
        
        int totalHartal = 0;
        
        for(int i = 1; i <= totalDays; i++){
            if(days[i] == 1 && (i % 7 != 0 && i % 7 != 6)){
                totalHartal++;
            }
        }
        
        cout << totalHartal << endl;
        
        
    }
}