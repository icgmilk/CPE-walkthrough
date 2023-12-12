//條件1: 對稱 條件2:正數 
#include <iostream>

using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    for(int testCases = 1; testCases <= t; testCases++){
        char temp_n ,temp_equal;
        cin >> temp_n >> temp_equal;
        
        int n;
        cin >> n;
        long long int matrix[n*n];
        bool isSymmetric = true, isPositive = true;
        
        for(int i = 0; i < n*n; i++){
            cin >> matrix[i];
                
            if(matrix[i] < 0){
                isPositive = false;
            }
        }
        
        int first = 0, last = (n * n) - 1;

        for(first; first <= last; first++){
            if(matrix[first] != matrix[last]){
                isSymmetric = false;
                break;
            }
            last--;
        }
        
        cout << "Test #" << testCases << ": ";
        
        if(isSymmetric && isPositive){
            cout << "Symmetric." << endl;
        }
        else{
            cout << "Non-symmetric." << endl;
        }
    }
}
