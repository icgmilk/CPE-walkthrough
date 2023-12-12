#include <iostream>

using namespace std;

int main(){
   int t, a, b;   
   cin >> t;
   
   for(int cases = 1; cases <= t; cases++){
       cin >> a >> b;
       int oddSum = 0;
       
       for(a; a <= b; a++){
           if(a % 2 == 1){
               oddSum += a;
           }
       }
       cout << "Case " << cases << ": " << oddSum << endl;
   }
}

