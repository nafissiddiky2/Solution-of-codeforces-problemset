#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> c(n + 2, 0);
        
        for(int i = 0; i < n; i++) {
            c[a[i]]++;
        }
        string ans = "NO";
        for(int i = 0; i <= n; i++){
            if(c[i] < 2*k){
                if(c[i] == (2*k) - 1) ans = "YES";
                break;
            }
        }
        cout << ans << endl;
    }
}