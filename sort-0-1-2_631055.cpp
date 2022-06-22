#include <bits/stdc++.h> 

void sort012(int *nums, int n) {
    vector<int> counts = {0,0,0};
    for(int i = 0; i < n; i++) {
        counts[nums[i]]++;
    }

    for(int i = 0, j = 0; i <= 2; i++) {
        while(counts[i]-- > 0) {
            nums[j++] = i;
        }
    }
}