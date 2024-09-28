#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int f = ceil(k*(k+1)/2);
        if(n>=f)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}