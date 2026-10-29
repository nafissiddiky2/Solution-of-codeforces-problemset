#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s=0;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    
    }
        for(int i=0;i<t;i++){
        if(a[i]==a[i+1]){
            continue;
        }
        else{
            s++;
        }
    
    }
    cout<<s<<endl;

}