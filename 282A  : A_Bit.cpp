#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,r=0;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[1]=='+'){
            r++;
        }
        else if(s[1]=='-'){
            r--;
        }
    }
    cout << r << endl;
}