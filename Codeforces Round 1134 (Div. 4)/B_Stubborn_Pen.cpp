#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int res = 0;
        char clr = 'R';

        for (int i = 0; i < n; i++){
            if (clr != s[i]){
                res++;
                clr = s[i];
            }
            clr = (clr == 'R') ? 'B' : 'R';
        }
        cout << res << "\n";
    }
    return 0;
}