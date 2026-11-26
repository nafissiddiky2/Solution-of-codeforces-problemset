#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int f=0,l=0;
        int fn=n/1000;
        int ln=n%1000;
        while(fn!=0){
            f=(f+(fn%10));
            fn=fn/10;
        }
        while(ln!=0){
            l=(l+(ln%10));
            ln=ln/10;
        }
        if(f==l){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}