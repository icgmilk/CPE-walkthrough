#include <bits//stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    string country, temp_firstName, temp_lastName;
    string totalCountry[n];
    
    for(int i = 0; i < n; i++){
        cin >> country >> temp_firstName >> temp_lastName;
        totalCountry[i] = country;
    }
    
    sort(totalCountry, totalCountry+n);
    
    int sum = 1;
    
    for(int i = 0; i < n; i++){    
        if(totalCountry[i] == totalCountry[i+1]){
            sum++;
            isSame = true;
        }
        else{
            cout << totalCountry[i] << ' ' << sum << endl;
            sum = 1;
        }
    }
}
