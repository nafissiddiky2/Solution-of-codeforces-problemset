#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    bool passed[105] = {false};

    int m1;
    cin >> m1;
    for(int i = 0; i < m1; i++){
        int x;
        cin >> x;
        passed[x] = true;
    }

    int m2;
    cin >> m2;
    for(int i = 0; i < m2; i++){
        int y;
        cin >> y;
        passed[y] = true;
    }

    for(int i = 1; i <= n; i++){
        if(!passed[i]){
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}