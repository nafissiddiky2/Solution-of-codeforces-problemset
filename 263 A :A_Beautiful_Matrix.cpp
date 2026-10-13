#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,a;
    int x,y;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>a;
            if(a==1){
                x=i;
                y=j;
            }
        }
    }
    int t=0;
    while(x!=2){
        if(x<2){
            x=x+1;
            t++;
        }
        else{
            x=x-1;
            t++;
        }
    }
    while(y!=2){
        if(y<2){
            y=y+1;
            t++;
        }
        else{
            y=y-1;
            t++;
        }
    }
    cout<<t;
}