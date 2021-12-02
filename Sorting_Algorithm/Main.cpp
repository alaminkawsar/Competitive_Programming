#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 4e5+5;

class Bubble_Sort
{
private:
    /* data */
public:
    void bubble_sort(int ar[],int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(ar[i]>ar[j]) swap(ar[i],ar[j]);
            }
        }
    }
};

void solve()
{
    
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
