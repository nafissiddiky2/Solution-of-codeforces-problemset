#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,max=0,c=0;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        c=c+b-a;
        if(c>max){
            max=c;
        }
        else{
            continue;
        }
    }
    cout<<max<<endl;
}