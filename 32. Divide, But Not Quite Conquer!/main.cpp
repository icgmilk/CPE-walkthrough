#include <bits//stdc++.h>

using namespace std;
#define MAX 1000
int main()
{
    int n, m;
    
    while(cin >> n >> m){
        if(n == 0 || m == 0 || m == 1){
            cout << "Boring!" << endl;
            continue;
        }
        
        bool isBoring = false;
        int devideSequence[MAX] = {0};
        devideSequence[0] = n;
        int sequenceLength = 1;
        
        while(n != 1){
            
            if(n % m == 0){
                devideSequence[sequenceLength] = n / m;
                n /= m;
            }
            else{
                isBoring = true;
                break;
            }
            sequenceLength++;
        }
        
        if(isBoring){
            cout << "Boring!" << endl;
        }
        else{
            for(int i = 0; i < sequenceLength; i++){
                cout << devideSequence[i] << ' ';
            }
            cout << "\b\n";
        }
        
        
    }
    
}