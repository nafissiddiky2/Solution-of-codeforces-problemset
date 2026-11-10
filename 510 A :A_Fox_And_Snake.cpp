#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int temp=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(i%2==0){
                cout<<"#";
            }
            else{
                if(temp%2==0){
                    if(j==y-1){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
                else{
                    if(j==0){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
            }
        }
        if(i%2!=0){
            temp++;
        }
        cout<<endl;
    }
}