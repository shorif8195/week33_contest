#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        if(x>y)cout<<"NEW PHONE\n";
        else if(x<y)cout<<"REPAIR\n";
        else cout<<"ANY\n";
    }
    return 0;
}