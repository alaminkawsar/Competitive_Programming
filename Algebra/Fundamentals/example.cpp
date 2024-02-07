// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/tutorial/
// find 
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
ll extended_euclidean(ll a,ll b, ll &x, ll &y,ll &d) {
    if (b==0) {
        x=1;
        y=0;
        d=a;
        return a;
    } else {
        ll d1 = extended_euclidean(b,a%b,x,y,d);
        ll temp = x;
        x = y;
        y = temp-y*(a/b);
        
        return d1;
    }
}
ll modInverse(ll a, ll m) {
    ll x,y,d;
    ll g = extended_euclidean(a,m,x,y,d);
    return (x%m+m)%m;
}
void solve()
{
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
    ll pw = bigPow(a,b,m);
    ll inv = modInverse(c,m);
    
    ll ans = (pw*inv)%m;
    cout<<ans<<endl;
    
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t=1,ts=0; //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
