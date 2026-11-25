#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int tem=1000; 
    for(int i=1;i<tem;i++){
        if((k*i)%10==0){
            cout<<i<<endl;
            break;
        }
        else if(((k*i)-r)%10==0){
            cout<<i<<endl;
            break;
        }
    }
}