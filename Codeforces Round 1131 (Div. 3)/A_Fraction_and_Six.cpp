#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        string p, q;
        cin >> p >> q;

        bool ok = true;  

        for (int i = 0; i < q.size(); i++) {
            bool found = false;
            for (int j = 0; j < p.size(); j++) {
                if (q[i] == p[j]) {
                    p.erase(p.begin() + j);
                    found = true;
                    break;
                }
            }
            if (!found) {     
                ok = false;
                break;        
            }
        }

        sort(p.begin(), p.end());

        if (ok && p == "isx")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
