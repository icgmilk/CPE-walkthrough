#include <iostream>

using namespace std;

int main(){
    
    int totalTestCases;
    cin >> totalTestCases;
    
    for(int testCases = 1; testCases <= totalTestCases; testCases++){
        char temp_n ,temp_equal;
        cin >> temp_n >> temp_equal;
        
        int matrixSize;
        cin >> matrixSize;
        
        long long int matrix[matrixSize*matrixSize];
        bool isSymmetric = true, isPositive = true;
        
        for(int i = 0; i < matrixSize * matrixSize; i++){
                cin >> matrix[i];
                
                if(matrix[i] < 0){
                    isPositive = false;
                }
        }
        
        int first = 0, last = (matrixSize * matrixSize) - 1;

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