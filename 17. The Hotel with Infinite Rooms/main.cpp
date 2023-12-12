#include <iostream>

using namespace std;

int main(){
   long long int s, d, stayDay;
   
   while(cin >> s >> d){
       stayDay = s;
       for(s; s <= d; s += stayDay){
           if(s == d){
               break;
           }
           stayDay++;
       }
       cout << stayDay << endl;
   }
}
