#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        int n;
        double p;
        int i;
        cin >> n >> p >> i;
        double q = 1-p;
        cout << setprecision(4) << pow(q,(i-1))*p / (1-pow(q,n)) << endl;
    }
}