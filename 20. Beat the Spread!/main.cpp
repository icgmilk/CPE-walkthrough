
#include <iostream>

using namespace std;

int main(){
    int testCases, sum, difference, teamAScore, teamBScore;
    cin >> testCases;
    
    while(testCases--){
        cin >> sum >> difference;
        teamAScore = (sum + difference) / 2;
        teamBScore = sum - teamAScore;
        if(teamAScore < 0 || teamBScore < 0 || (sum + difference) % 2 != 0){
            cout << "impossible" << endl;
        }
        else{
            cout << teamAScore << ' ' << teamBScore << endl;
        }
    }
}