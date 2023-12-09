#include <iostream>

using namespace std;

char directionChangeLeft(char direction){
    if(direction == 'E'){
        direction = 'N';
    }
    else if(direction == 'N'){
        direction = 'W';
    }
    else if(direction == 'W'){
        direction = 'S';
    }
    else if(direction == 'S'){
        direction = 'E';
    }
    
    return direction;
}

char directionChangeRight(char direction){
    if(direction == 'E'){
        direction = 'S';
    }
    else if(direction == 'S'){
        direction = 'W';
    }
    else if(direction == 'W'){
        direction = 'N';
    }
    else if(direction == 'N'){
        direction = 'E';
    }
    
    return direction;
}

int main(){
    int topX, topY;
    cin >> topX >> topY;
    
    bool isLost[100][100] = {false};
    int x, y;
    char direction;
    string commend;
    while(cin >> x >> y >> direction){
        bool isFall = false;
        cin.ignore();
        getline(cin, commend);
        
        for(int i = 0; i < commend.length(); i++){
            if(commend[i] == 'L'){
                direction = directionChangeLeft(direction);
            }
            else if(commend[i] == 'R'){
                direction = directionChangeRight(direction);
            }
            else if(commend[i] == 'F'){
                if(direction == 'E'){
                    x++;
                }
                else if(direction == 'N'){
                    y++;
                }
                else if(direction == 'W'){
                    x--;
                }
                else if(direction == 'S'){
                    y--;
                }
            }
            
            if(x<0 || x>topX || y<0 || y>topY){
                if(direction == 'E'){
                    x--;
                }
                else if(direction == 'N'){
                    y--;
                }
                else if(direction == 'W'){
                    x++;
                }
                else if(direction == 'S'){
                    y++;
                }
                
                if(isLost[x][y] == true){
                    continue;
                }
                
                isLost[x][y] = true;
                isFall = true;
                break;
            }
        }
        if(isFall){
            cout << x << ' ' << y << ' ' << direction << ' ' << "LOST" << endl;
        }
        else{
            cout << x << ' ' << y << ' ' << direction << endl;
        }
        
        
    
    }
}