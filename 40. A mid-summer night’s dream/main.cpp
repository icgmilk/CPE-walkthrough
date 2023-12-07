#include <bits//stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int numberList[n];
        for(int i = 0; i < n; i++){
            cin >> numberList[i];
        }
        sort(numberList, numberList+n);
        int mid, count = 0, min;
        if(n%2 == 0){
            mid = numberList[n/2-1];
            count = 0;
            for(int i = 0; i < n; i++){
                if(numberList[i] == numberList[n/2] || numberList[i] == numberList[n/2-1]){
                    count++;
                }
            }
            min = numberList[n/2]-numberList[n/2-1]+1;
        }
        else{
            mid = (numberList[n/2]);
            for(int i = 0; i < n; i++){
                if(numberList[i] == numberList[n/2]){
                    count++;
                }
            }
            min = 1;
        }
        cout << mid <<' ' << count << ' ' << min << endl;
    }
}
