#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n < 26) {
        cout << "NO" << endl;
        return 0;
    }
    
    
    bool tem[26] = {false};
    
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            tem[s[i]-'A'] = true;
        }
        else if(s[i]>='a' && s[i]<='z'){
            tem[s[i]-'a'] = true;
        }
    }
    
    
    for (int i = 0; i < 26; i++) {
        if (!tem[i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}