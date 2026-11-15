#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> x(3);
    cin >> x[0] >> x[1] >> x[2];
    sort(x.begin(), x.end());
    int td = x[2] - x[0];
    cout << td << endl;
}
