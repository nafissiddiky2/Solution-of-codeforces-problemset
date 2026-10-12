#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            r++;
        }
    }
    cout << r << endl;
}