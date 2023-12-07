#include <bits//stdc++.h>

using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    for(int i = 1; i <= testCases; i++){
        printf("Case %d:\n", i);
        int cost[36];
        for(int j = 0; j < 36; j++){
            cin >> cost[j];
        }
        int query;
        cin >> query;
        for(int j = 0; j < query; j++){
            int queryNumber;
            cin >> queryNumber;
            int baseCosts[37] = {0};
 
            for(int base = 2; base <= 36; base++){
                int temp = queryNumber;
                vector<int> baseChange;
                while(temp != 0){
                    baseChange.push_back(temp%base);
                    temp /= base;
                }
                
                for(int k = 0; k < baseChange.size(); k++){
                    baseCosts[base] += cost[baseChange[k]];
                }
                
            }
            int minBase = 2, minCosts = baseCosts[2];
            for(int base = 3; base <= 36; base++){
                if(minCosts > baseCosts[base]){
                    minCosts = baseCosts[base];
                    minBase = base;
                }
            }
            
            
            printf("Cheapest base(s) for number %d: ", queryNumber);
            cout << minBase;
            for(int base = minBase+1; base <= 36; base++){
                if(minCosts == baseCosts[base]){
                    cout << ' ' << base;
                }
            }
            cout << "\n";
            
        }
        cout << "\n";
    }
}