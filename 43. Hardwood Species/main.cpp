#include <bits//stdc++.h>

using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    cin.ignore();
    cin.ignore();
    while(testCases--){
        map<string, int> treeList;
        string tree;
        double treeCount = 0;
        while(getline(cin, tree) && tree != ""){
            treeList[tree]++;
            treeCount++;
        }
        for(auto i: treeList){
            cout << i.first << ' ';
            printf("%.4f\n", (i.second/treeCount) * 100);
        }
        cout << "\n";
    }
}