#include <bits/stdc++.h> 
long long maxSubarraySum(int nums[], int n)
{
    long long msf = 0;
    long long sum = 0;
        
    for(int i = 0; i < n; i++){
        sum = max(sum + (long long) nums[i], (long long) nums[i]);
        msf = max(msf, sum);
    }
        
    return max(sum, msf);
}