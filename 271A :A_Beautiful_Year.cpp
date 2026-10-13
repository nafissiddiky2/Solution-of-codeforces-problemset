#include<bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;
    
    while (true) {
        y++; 
        int ty = y;
        int a[4];
        for (int i = 3; i >= 0; i--) {
            a[i] = ty % 10;
            ty = ty / 10;
        }
        bool hasDistinctDigits = true;
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (a[i] == a[j]) {
                    hasDistinctDigits = false;
                    break;
                }
            }
            if (!hasDistinctDigits) break;
        }
        if (hasDistinctDigits) {
            cout << y;
            break;
        }
    }
    
    return 0;
}