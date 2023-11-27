#include <iostream>

using namespace std;


int main(){
   long long int groupMembers, finalDay, stayDay;
   
   while(cin >> groupMembers >> finalDay){
       stayDay = groupMembers;
       for(groupMembers; groupMembers <= finalDay; groupMembers += stayDay){
           if(groupMembers == finalDay){
               break;
           }
           stayDay++;
       }
       
       cout << stayDay << endl;
   }
}

