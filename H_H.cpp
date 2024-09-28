#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    string t;cin>>t;
    int sizeofs = s.size();
    int sizeoft = t.size();
    int si = max(sizeofs,sizeoft);
    int sj = min(sizeofs,sizeoft);
    int count =0 ;

    int x = sizeofs,y=sizeoft;
    for(int i = si-1;i>=0;i--){
        if(sj<0 || s[x-1]!=t[y-1]){
            break;

        }
        count++;
        sj--;
        x--;y--;

        

    }
    // cout<<sizeofs<<endl<<sizeoft<<endl<<count<<endl;;
    int ans = sizeofs-count;
    ans += sizeoft - count;
    cout<<ans<<endl;
    return 0;
}