#include <iostream>

using namespace std;


int main(){
   int totalCases, minimum, maximum;
   
   cin >> totalCases;
   
   for(int cases = 1; cases <= totalCases; cases++){
       cin >> minimum >> maximum;
       int oddSum = 0;
       
       for(minimum; minimum <= maximum; minimum++){
           if(minimum % 2 == 1){
               oddSum += minimum;
           }
       }
       
       cout << "Case " << cases << ": " << oddSum << endl;
   }
}

