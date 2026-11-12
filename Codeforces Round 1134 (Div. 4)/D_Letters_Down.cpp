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

        bool need[26] = {false};

        int i = 0;
        int j = n - 1;
        while (i < j){
            int u = s[i] - 'a';
            int v = s[j] - 'a';
            if (u != v){
                int l = u, h = v;
                if (l > h){
                    int temp = l;
                    l = h;
                    h = temp;
                }
                for (int x = l + 1; x <= h; x++){
                    need[x] = true;
                }
            }
            i++;
            j--;
        }
        int ans = 0;
        for (int x = 0; x < 26; x++){
            if (need[x] == true){
                ans++;
            }
        }
        cout << ans << endl;
    }
}