#include <iostream>

using namespace std;

int main(){
    int n, s, d, teamAScore, teamBScore;
    cin >> n;
    
    while(n--){
        cin >> s >> d;
        
        teamAScore = (s+d) / 2, teamBScore = s-teamAScore;
        
        if(teamAScore<0 || teamBScore<0 || (s+d) % 2 != 0){
            cout << "impossible" << endl;
        }
        else{
            cout << teamAScore << ' ' << teamBScore << endl;
        }
    }
}
