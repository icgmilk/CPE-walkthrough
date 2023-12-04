#include <bits//stdc++.h>

using namespace std;


int main(){
    int n, m;
    int fieldCount = 1;
    while(cin >> n >> m && n != 0 && m != 0){
        char field[n][m];
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> field[i][j];
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int minesweeper = 0;
                for(int k = -1; k <= 1; k++){
                    for(int l = -1; l <= 1; l++){
                        if(i+k < 0 || i+k >= n || j+l < 0 || j+l >= m){
                            continue;
                        }
                        else if(field[i+k][j+l] == '*'){
                            minesweeper++;
                        }
                    }
                }
                if(field[i][j] == '*'){
                    field[i][j] = '*';
                }
                else{
                    field[i][j] = minesweeper+'0';
                }
                
            }
        }
        
        printf("Field #%d:\n", fieldCount);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << field[i][j];
            }
            cout << "\n";
        }
        fieldCount++;
    }
}
