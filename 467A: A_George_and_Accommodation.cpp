#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a+1<b){
            s++;
        }
    }
    cout<<s<<endl;
}