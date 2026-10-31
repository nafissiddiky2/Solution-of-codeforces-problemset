#include <bits/stdc++.h>
using namespace std;

int main() {
    int s[4];
    for (int i = 0; i < 4; i++){
         cin >> s[i];
    }
    int d= 0;
    for (int i = 0; i < 4; i++) {
        bool isNew = true;
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) { 
                isNew = false;
                 break; 
            }
        }
        if (isNew) d++;
    }
    
    cout << 4 - d << endl;
    return 0;
}