#include <stdio.h>
#include <string.h>

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
    scanf("%d %d", &topX, &topY);

    int isLost[100][100] = {0};
    int x, y;
    char direction;
    char commend[100];
    while(scanf("%d %d %c", &x, &y, &direction) != EOF){
        int isFall = 0;
        scanf("%s", commend);
        
        for(int i = 0; i < strlen(commend); i++){
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
                
                if(isLost[x][y] == 1){
                    continue;
                }
                
                isLost[x][y] = 1;
                isFall = 1;
                break;
            }
        }
        if(isFall){
            printf("%d %d %c LOST\n", x, y, direction);
        }
        else{
            printf("%d %d %c\n", x, y, direction);
        }
    
    }
}