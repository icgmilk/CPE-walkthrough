#include <stdio.h>
#include <string.h>

int main(){
    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        
        int top = 1;
        int north = 2, west = 3;
        char command[6];
        for(int i = 0; i < n; i++){
            int temp_top = top;
            scanf("%s", command);
            if(strcmp(command, "east") == 0){
                top = west;
                west = 7-temp_top;
            }
            else if(strcmp(command, "west") == 0){
                top = 7-west;
                west = temp_top;
            }
            else if(strcmp(command, "south") == 0){
                top = north;
                north = 7-temp_top;
            }
            else if(strcmp(command, "north") == 0){
                top = 7-north;
                north = temp_top;
            }
        }
        printf("%d\n", top);
    }
}
