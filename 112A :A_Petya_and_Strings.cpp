#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    char s1[101],s2[101];
    cin >> s1 >> s2;
    int n = strlen(s1);
    for (i=0;i<=n;i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    int r=strcmp(s1,s2);
    if (r<0){
        cout << "-1";
    }
    else if(r>0){
        cout << "1";
    }
    else{
        cout << "0";
    }
}