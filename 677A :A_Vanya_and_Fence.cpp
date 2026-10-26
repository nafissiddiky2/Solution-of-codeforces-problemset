#include<iostream>
using namespace std;
main(){
    int n,h,i;
    cin>>n>>h;
    int w=0;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]<=h){
            w++;
        }
        else{
            w+=2;
        }
    }
    cout<<w<<endl;
}