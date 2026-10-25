#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if(s1 == string(s2.rbegin(), s2.rend())){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}