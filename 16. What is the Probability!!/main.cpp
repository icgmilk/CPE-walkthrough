#include <bits/stdc++.h>

using namespace std;

int main(){
    int s;
    cin >> s;
    while(s--){
        int n, i;
        double p;
        
        cin >> n >> p >> i;
        double q = 1-p;
        printf("%.4f\n", pow(q, (i-1))*p / (1-pow(q, n)));
    }
}
