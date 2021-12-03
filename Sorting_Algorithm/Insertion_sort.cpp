#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 4e5+5;

class Insertion_Sort
{
    public:
    void insertionSort(int *a, int n){
        for(int i=n;i>0;i--){
            if(a[i]<a[i-1]) swap(a[i],a[i-1]);
        }
    }

};

int main()
{
    int n;
    cin>>n;
    int ar[n+5];
    Insertion_Sort sortIn = Insertion_Sort();
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sortIn.insertionSort(ar,i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    
}