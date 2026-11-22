#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sereja=0,dima=0;
    int left=0,right=n-1;
    bool serejaTurn=true;
    while(left<=right){
        int picked;
        if(a[left]>a[right]){
            picked=a[left];
            left++;
        }
        else{
            picked=a[right];
            right--;
        }
        if(serejaTurn){
            sereja+=picked;
        }
        else{
            dima+=picked;
        }
        serejaTurn=!serejaTurn;
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}