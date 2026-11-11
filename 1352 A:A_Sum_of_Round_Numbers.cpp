#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int tem,n,a=0;
        cin>>n;
        tem=n;
        while(n>0){
            if(n%10!=0){
                a++;
            }
            n=n/10;
        }
        int b[a];
        int i=0, p=1;
        while(tem>0){
            if(tem%10!=0){
                b[i]=(tem%10)*p;
                i++;
            }
            tem=tem/10;
            p=p*10;
        }
        cout<<a<<endl;
        for(int j=0;j<a;j++){
            cout<<b[j]<<" ";
        }
        cout<<endl;
    }
}
