#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--){
        string s,res;
        cin >> s;
        if (s.length() > 10){
            res += s[0];
            res += to_string(s.length()-2);
            res += s[s.length()-1];
            cout << res << endl;
        }
        else
            cout << s << endl;

    }
}