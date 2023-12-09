#include <bits//stdc++.h>

using namespace std;

int main(){
    
    
    int n;
    string commend;
    while(cin >> n && n != 0){
        int dice[3] = {1, 2, 3};
        cin.ignore();
        while(n--){
            int temp = dice[0];
            getline(cin, commend);
            if(commend == "east"){
                dice[0] = dice[2];
                dice[2] = 7-temp;
                
            }
            else if(commend == "west"){
                dice[0] = 7-dice[2];
                dice[2] = temp;
            }
            else if(commend == "south"){
                dice[0] = dice[1];
                dice[1] = 7-temp;
                
            }
            else if(commend == "north"){
                dice[0] = 7-dice[1];
                dice[1] = temp;
            }
            
        }
        cout << dice[0] << endl;        
    }
}