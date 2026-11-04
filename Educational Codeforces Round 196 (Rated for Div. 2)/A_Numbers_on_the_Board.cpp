#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        int size = r - l + 1;
        int S = (l + r) * size / 2;

        int ans;

        if (S == 0 || (l <= S && S <= r)) {
            ans = 0;
        } else if (l > 0 || r < 0) {
            ans = size - 1;
        } else {
            int m = min(-l, r);
            ans = size - 2 * m - 2;
        }

        cout << ans << endl;
    }

    return 0;
}
