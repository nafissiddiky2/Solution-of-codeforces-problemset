#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    int r=0;
        if(m/100>0){
            r+=m/100;
            m=m%100;
        }
        if(m/20>0){
            r+=m/20;
            m=m%20;
        }
        if(m/10>0){
            r+=m/10;
            m=m%10;
        }
        if(m/5>0){
            r+=m/5;
            m=m%5;
        }
        if(m/1>0){
            r+=m/1;
            m=m%1;
        }
    cout<<r<<endl;
}
