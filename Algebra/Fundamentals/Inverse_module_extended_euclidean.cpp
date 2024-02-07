#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 4e5+5;

int x,y,d;
int extended_euclidean(int a,int b) {
    if (b==0) {
        x=1;
        y=0;
        d=a;
        return a;
    } else {
        int d1 = extended_euclidean(b,a%b);
        int temp = x;
        x = y;
        y = temp-y*(a/b);
        
        return d1;
    }
}
int modInverse(int a, int m) {
    int g = extended_euclidean(a,m);
    if (g!=1) {
        cout<<"Inverse doesn't exist\n";
        return -1;
    } else {
        return (x%m+m)%m;
    }
}

void solve()
{
    int a = 2, m = 1000000007;
    cout<<modInverse(a,m)<<endl;
    
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
