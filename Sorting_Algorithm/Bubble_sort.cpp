#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 4e5+5;

class Bubble_Sort
{
private:
    /* data */
public:
    void bubble_sort(int *ar,int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(ar[i]>ar[j]) swap(ar[i],ar[j]);
            }
        }
    }
};

int main()
{
    int n; cin>>n;
    int ar[n+5];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    Bubble_Sort Bsort = Bubble_Sort();
    Bsort.bubble_sort(ar,n);
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }

    return 0;
}
