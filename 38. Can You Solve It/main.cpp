#include <bits//stdc++.h>
using namespace std;

long long int solve(int x, int y){
    long long int basicStep = 0, extra = x;
    for(int i = 1; i <= x+y; i++){
        basicStep+=i;
    }
    return basicStep+extra;
    
}

int main(){
    int n;
    cin >> n;
    for(int testCase = 1; testCase <= n; testCase++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        printf("Case %d: %lld\n", testCase, solve(x2, y2)-solve(x1, y1));
    }
}