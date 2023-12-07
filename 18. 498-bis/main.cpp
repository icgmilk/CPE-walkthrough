#include <bits//stdc++.h>

using namespace std;

int main(){
    int x;
    while(cin >> x){
        string coef;
        cin.ignore();
        getline(cin, coef);
        
        stringstream ss("");
        ss << coef;
        vector<int> poly;
        int number;
        
        while(ss >> number){
            poly.push_back(number);
        }
        
        long long int result = 0, expon = 1;
        for(int i = poly.size()-2; i >= 0; i--){
            result += expon * poly[i] * pow(x, expon-1);
            expon++;
        }
        
        cout << result << endl;
    }
    
}