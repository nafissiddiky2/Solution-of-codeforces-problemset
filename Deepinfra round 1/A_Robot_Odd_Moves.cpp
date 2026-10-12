#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if((a+b)%2==0 && b<=a){
            cout<< a <<endl;
        }
        else if(b<=a+1){
            cout <<a+1<<endl;
        }
        else{
            cout << -1 <<endl;
        }
    }
    return 0;
}
