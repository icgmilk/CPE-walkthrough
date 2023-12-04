#include <bits//stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    cin.ignore();
    
    while(t--){
        string note;
        int finger[10] = {0};
        bool before[10] = {false};
        
        getline(cin, note);
        for(int i = 0; i < note.length(); i++){
            bool isHold[10] = {false};
            switch(note[i]){
                case 'c':
                    for(int j = 1; j <= 3; j++){
                        isHold[j] = true;
                    }
                    for(int j = 6; j <= 9; j++){
                        isHold[j] = true;
                    }
                    break;
                
                case 'd':
                    for(int j = 1; j <= 3; j++){
                        isHold[j] = true;
                    }
                    for(int j = 6; j <= 8; j++){
                        isHold[j] = true;
                    }
                    break;
                
                case 'e':
                    for(int j = 1; j <= 3; j++){
                        isHold[j] = true;
                    }
                    for(int j = 6; j <= 7; j++){
                        isHold[j] = true;
                    }
                    break;
                
                case 'f':
                    for(int j = 1; j <= 3; j++){
                        isHold[j] = true;
                    }
                    isHold[6] = true;;
                    break;

                
                case 'g':
                    for(int j = 1; j <= 3; j++){
                        isHold[j] = true;
                    }
                    break;
                
                case 'a':
                    for(int j = 1; j <= 2; j++){
                        isHold[j] = true;
                    }
                    break;
                
                case 'b':
                    isHold[1] = true;
                    break;

                
                case 'C':
                    isHold[2] = true;
                    break;

                
                case 'D':
                    for(int j = 0; j <= 3; j++){
                        isHold[j] = true;
                    }
                    for(int j = 6; j <= 8; j++){
                        isHold[j] = true;
                    }
                    break;
                
                case 'E':
                    for(int j = 0; j <= 3; j++){
                        isHold[j] = true;
                    }
                    for(int j = 6; j <= 7; j++){
                        isHold[j] = true;
                    }
                    break;
                
                case 'F':
                    for(int j = 0; j <= 3; j++){
                        isHold[j] = true;
                    }
                    isHold[6] = true;
                    break;
                
                case 'G':
                    for(int j = 0; j <= 3; j++){
                        isHold[j] = true;
                    }
                    break;
                
                case 'A':
                    for(int j = 0; j <= 2; j++){
                        isHold[j] = true;
                    }
                    break;
                
                case 'B':
                    for(int j = 0; j <= 1; j++){
                        isHold[j] = true;
                    }
                    break;
            }
            
            for(int j = 0; j < 10; j++){
                if(before[j] == false && isHold[j] == true){
                    finger[j]++;
                }
            before[j] = isHold[j];
            }
        }
        
        for(int i = 0; i < 10; i++){
            cout << finger[i] << ' ';
        }
        cout << "\b\n";
        
       
        
    }
}
