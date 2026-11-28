#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[4];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        int res=0;
        for(int i=1;i<4;i++){
            if(a[0]<a[i]){
                res++;
            }
            else{
                continue;
            }
        }
        cout<<res<<endl;
    }
}