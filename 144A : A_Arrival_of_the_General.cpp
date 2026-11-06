#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int maxi = max_element(a, a+n) - a;
    int mini = min_element(a, a+n) - a;          
    
    for(int i = n-1; i >= 0; i--){
        if(a[i] == a[mini]){
             mini = i; break;
        }
    }

    int res = maxi + (n - 1 - mini);
    if(maxi > mini) res--;

    cout << res << endl;
}