#include<bits/stdc++.h>
using namespace std;
int main(){
    char a [1004] ,b[1004];
    cin.getline(a,1004);
    int L =strlen(a);
    b[0]=toupper(a[0]);
    for(int i=1;i<L;i++){
        b[i]=a[i];
    }
    b[L]='\0';
    cout<<b;

}