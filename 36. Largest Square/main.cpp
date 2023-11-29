#include <bits//stdc++.h>

using namespace std;

bool isValid(int x, int y, int m, int n){ 
    if(x >= 0 && x < m && y >= 0 && y < n){
        return false;
    }
    return true;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int m, n, q;
        cin >> m >> n >> q;
        cout << m << ' ' << n << ' ' << q << endl;
        
        char square[m][n];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> square[i][j];
            }
        }
        
        while(q--){
            int r, c;
            cin >> r >> c;
            
            int unitLength = 0;
            bool maxLength = false;
            
            while(true){
                for(int i = -1; i <= 1; i++){
                    for(int j = -1; j <= 1; j++){
                        if(square[r][c] != square[r + i*unitLength][c + j*unitLength] || isValid(r + i*unitLength, c + j*unitLength, m, n)){
                            maxLength = true;
                        }
                        if(maxLength){
                            break;
                        }
                    }
                    if(maxLength){
                        break;
                    }
                }
                
                if(maxLength){
                    unitLength--;
                    break;
                }
                else{
                    unitLength++;
                }
            }
            
            cout << unitLength*2 + 1 << endl;;
        }
        
        
    }
}