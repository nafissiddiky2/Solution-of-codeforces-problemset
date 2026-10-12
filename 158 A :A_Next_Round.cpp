#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,r=0;
    cin >>t>>x;
    int a[t];
    for(int i=0;i<=t-1;i++){
        cin >> a[i];
    }
    for(int i=0;i<t;i++){
        if(a[i]>=a[x-1] && a[i]!=0){
            r++;
        }
    }
    cout << r << endl;
}