#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;
        int g1 = __gcd(a, l);
        int g2 = __gcd(b, l);
        int L = lcm(g1, g2);
        cout << l / L << endl;
    }
    return 0;
}