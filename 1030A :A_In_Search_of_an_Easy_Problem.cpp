#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            ans=1;
            break;
        }
    }
    if(ans==1){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
}