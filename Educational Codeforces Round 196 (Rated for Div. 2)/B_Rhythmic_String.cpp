#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int best = 1;
        for (int i = 0; i < n; i++) {
            int p = a[i];
            int tem = 0;
            for (int j = 0; j < n; j++) {
                if (a[j] % p == 0) tem++;
            }
            
            if(tem > 1) {
                best = max(best, tem);
            }
        }

        cout << n - best << endl;
    }
    return 0;
}