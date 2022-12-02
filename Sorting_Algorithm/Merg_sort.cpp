#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 4e5+5;

class Merge_Sort
{
    public:
    void Merge(int *ar, int l, int m, int r){
        int br[r-l+5];
        int k=m+1,j=l;
        for(int i=0;i<=(r-l+1);i++){
            if(l<=m and k<=r){
                if(ar[l]>ar[k]) br[i]=ar[l++];
                else br[i]=ar[k++];
            }else if(l<=m) br[i]=ar[l++];
            else br[i]=ar[k++];
        }
        for(int i=0;i<=(r-l+1);i++){
            ar[j++]=br[i];
        }
    }
    void mergeSort(int *ar,int l, int r){
        if(l>=r) return;
        int m=(l+r)/2;
        mergeSort(ar,l,m);
        mergeSort(ar,m+1,r);
        Merge(ar,l,m,r);
    }
};

int main()
{
    //int n; cin>>n;
    int ar[6]={1,5,6,3,7};
    //for(int i=0;i<n;i++) cin>>ar[i];
    Merge_Sort sortM = Merge_Sort();
    //sortM.mergeSort(ar, 0, n-1);
    sortM.Merge(ar,0,3,6);
    
    for(int i=0;i<5;i++){
        printf("%d ",ar[i]);
    }

    return 0;
}
