#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 4e5+5;

ll bigPow(ll a, ll b, ll m){
    ll res = 1;
    while(b>0){
        if(b&1)
            res=res*a%m;
        a = a*a%m;
        b >>=1;
    }
    return res;
}
ll modInverse(ll a, ll m) {
    ll g = bigPow(a,m-2,m);
    return g;
}

void solve()
{
    cout<<modInverse(2,1000000007)<<endl;
    
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t=1,ts=0; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
