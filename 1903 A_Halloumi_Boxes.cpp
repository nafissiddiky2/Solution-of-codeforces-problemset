#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        if(k >= 2){
            cout << "YES" << endl;
        }
        else{
            bool s = true;
            for(int i = 1; i < n; i++){
                if(a[i] < a[i-1]){
                    s = false;
                    break;
                }
            }
            if(s){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}