#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXN = 200005;
ll a[MAXN];
ll pref[MAXN];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        ll p;
        cin >> n >> k >> p;
        
        for (int i = 0; i < n; i++) cin >> a[i];
        
        sort(a, a + n);
        
        pref[0] = 0;
        for (int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + a[i];
        
        ll ans = pref[n];
        int maxJ = n / k;
        for (int j = 1; j <= maxJ; j++) {
            ll jp = (ll)j * p;
            ll fp = pref[n] - pref[j * k];
            ll total = jp + fp;
            if (total > ans) ans = total;
        }
        cout << ans << "\n";
    }
    return 0;
}