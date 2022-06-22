#include <bits/stdc++.h> 
using ll = long long;
void mergeSort(ll *arr, int l, int r, ll &res) {
    if(l >= r) return;
    ll m = (l + r) / 2;
    
    mergeSort(arr, l, m, res);
    mergeSort(arr, m + 1, r, res);
    
    ll n1 = m - l + 1;
    ll n2 = r - m;
    ll left[n1], right[n2];
    
    for(ll i = 0; i < n1; i++) left[i] = arr[i + l];
    for(ll i = 0; i < n2; i++) right[i] = arr[i + m + 1];
    
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2) {
        if(left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];       
            res += (n1 - i);
        }
    }
    
    while(i < n1) {
        arr[k++] = left[i++];
    }
    
    while(j < n2) {
        arr[k++] = right[j++];
    }
} 

ll getInversions(ll *arr, int n){
    ll res = 0;
    mergeSort(arr, 0, n - 1, res);
    return res;
}