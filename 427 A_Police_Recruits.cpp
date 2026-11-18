#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int p=0,o=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            p+=a[i];
        }
        else if(a[i]==-1 && p==0){
            o++;
        }
        else if(a[i]==-1 && p>0){
            p--;
        }

    }
    cout<<o<<endl;
}