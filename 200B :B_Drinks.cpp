#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin>>n;
    double x=n;
    double s=0;
    while(x--){
        double t;
        cin>>t;
        s=s+t;
    }
    double r=(s/n*1.0);
    cout<< fixed << setprecision(12) <<r<<endl;
}