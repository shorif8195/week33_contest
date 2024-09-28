#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[64];
    for(int i=0;i<64;i++){
        cin>>a[i];
    }
    long long int sum =0;

    for(int i=0;i<64;i++){
        if(a[i]==1)sum += 1LL<<i;

    }
    cout<<sum<<endl;
    return 0;
}