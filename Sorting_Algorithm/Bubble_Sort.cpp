#include<bits/stdc++.h>
using namespace;

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
