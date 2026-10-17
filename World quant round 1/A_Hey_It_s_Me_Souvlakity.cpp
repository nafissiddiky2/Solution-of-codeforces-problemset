#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt = count(s.begin(), s.end(), '1');

        if (cnt == 1) {
            cout << 0 << endl;
        } else if (cnt == 2) {
            cout << 1 << endl;
        } else {
            int f = s.find('1');
            int l = s.rfind('1');
            cout << (l - f) << endl;
        }
    }
    return 0;
}
