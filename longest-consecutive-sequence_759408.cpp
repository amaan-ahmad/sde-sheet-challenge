#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int curr = 1;
        int msf = 1;
        for(int i = 1; i < nums.size(); i++) {
            int diff = abs(nums[i] - nums[i-1]);
            if(diff == 1) {
                curr++;
                msf = max(msf, curr);
            } else if (diff == 0){
                continue;
            } else {
                msf = max(msf, curr);
                curr = 1;
            }
        }
        return msf;
}