#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int o=0, e=0;
        for(int i=0;i<n;i++){
            long long x; cin>>x;
            if(x&1) o++; else e++;
        }
        if((o==1 && e==1) || (o==3 && e==0))
            cout<<"Larpity\n";
        else
            cout<<"Moggity\n";
    }
}