#include <bits//stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        string note;
        int finger[10] = {0};
        cin.ignore();
        getline(cin, note);
        for(int i = 0; i < note.length(); i++){
            switch(note[i]){
                case 'c':
                for(int j = 1; j <= 3; j++){
                    finger[j]++;
                }
                for(int j = 6; j <= 9; j++){
                    finger[j]++;
                }
                
                case 'd':
                for(int j = 1; j <= 3; j++){
                    finger[j]++;
                }
                for(int j = 6; j <= 8; j++){
                    finger[j]++;
                }
                
                case 'e':
                for(int j = 1; j <= 3; j++){
                    finger[j]++;
                }
                for(int j = 6; j <= 7; j++){
                    finger[j]++;
                }
                
                case 'f':
                for(int j = 1; j <= 3; j++){
                    finger[j]++;
                }
                finger[6]++;
                
                case 'g':
                for(int j = 1; j <= 3; j++){
                    finger[j]++;
                }
                
                case 'a':
                for(int j = 1; j <= 2; j++){
                    finger[j]++;
                }
                
                case 'b':
                finger[1]++;
                
                case 'C':
                finger[2]++;
                
                case 'D':
                for(int j = 0; j <= 3; j++){
                    finger[j]++;
                }
                for(int j = 6; j <= 8; j++){
                    finger[j]++;
                }
                
                case 'E':
                for(int j = 0; j <= 3; j++){
                    finger[j]++;
                }
                for(int j = 6; j <= 7; j++){
                    finger[j]++;
                }
                
                case 'F':
                for(int j = 0; j <= 4; j++){
                    finger[j]++;
                }
                finger[6]++;
                
                case 'G':
                for(int j = 0; j <= 3; j++){
                    finger[j]++;
                }
                
                case 'A':
                for(int j = 0; j <= 2; j++){
                    finger[j]++;
                }
                
                case 'B':
                for(int j = 0; j <= 1; j++){
                    finger[j]++;
                }
            }
        }
        
        for(int i = 0; i < 10; i++){
            cout << finger[i] << ' ';
        }
        cout << "\b\n";
        
    }
}
