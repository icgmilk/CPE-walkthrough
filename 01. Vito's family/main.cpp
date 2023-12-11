#include <bits/stdc++.h>

using namespace std;

#define MAX 30000

int main(){
    int testCase;
    
    cin >> testCase;
    
    while(testCase--){
        int r, s[MAX], minAddress, totalDistances = 0;
        cin >> r;
        
        for(int i = 0; i < r; i++){
            cin >> s[i];
        }
        sort(s, s + r);
        

        if(r % 2 == 0){
            minAddress = s[((r / 2) + (r / 2 - 1)) / 2];
        }
        else{
            minAddress = s[r / 2];
        }
        
        for(int i = 0; i < r; i++){
            totalDistances += abs(minAddress - s[i]);
        }
        
        cout << totalDistances << endl;
    }
}