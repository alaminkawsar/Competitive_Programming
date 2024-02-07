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
void solve()
{
    int a = 10, b = 15;
    cout<<"gcd: "<<extended_euclidean(a,b)<<endl;
    cout<<"solution: "<<x<<' '<<y<<endl;

    
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
