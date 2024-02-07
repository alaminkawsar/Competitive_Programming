#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 4e5+5;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

void solve()
{
    int a = 10, b = 15;
    cout<<gcd(a,b)<<endl;
    
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
