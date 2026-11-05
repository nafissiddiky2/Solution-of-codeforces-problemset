#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;

struct Treasure {
    i64 x, y, val;
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        i64 a, b;
        cin >> n >> a >> b;
        vector<i64> X(n), Y(n), W(n);
        for (auto &v : X) cin>>v;
        for (auto &v : Y) cin>>v;
        for (auto &v : W) cin>>v;

        vector<Treasure> all;
        all.reserve((size_t)n * n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                i64 p = X[j] - a * X[i] + b * Y[i];
                i64 q = Y[j] - a * Y[i] - b * X[i];
                i64 cx = p * (1 - a) - q * b;
                i64 cy = p * b + q * (1 - a);
                all.push_back({cx, cy, W[i]});
            }
        }
        sort(all.begin(), all.end(), [](const Treasure &u, const Treasure &v) {
            if (u.x != v.x) return u.x < v.x;
            return u.y < v.y;
        });

        i64 best = 0;
        size_t i = 0;
        while (i < all.size()) {
            size_t j = i;
            i64 sum = 0;
            while (j < all.size() && all[j].x == all[i].x && all[j].y == all[i].y) {
                sum += all[j].val;
                j++;
            }
            best = max(best, sum);
            i = j;
        }
        cout << best << endl;
    }
    return 0;
}
