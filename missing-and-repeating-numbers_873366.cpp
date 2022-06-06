#include <bits/stdc++.h> 

// doesn't uses constant space

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    set<int> s;
    int r, m;
    for(auto &num : arr) {
        if(s.find(num) == s.end()) s.insert(num);
        else r = num;
    }
    for(int i = 1; i <= n; i++) {
        if(s.find(i) == s.end()) {
            m = i;
            break;
        }
    }
    
    return {m, r};
}


/*-----constant space ------------ */
using lli = long long int;
pair<int,int> missingAndRepeatingConstantSpace(vector<int> &arr, int n)
{
    lli sum = (n * (n + 1)) / 2;
    lli pro = (n * (n + 1) * (2*n+1) ) / 6;
    for(auto &x: arr){
        sum -= (lli) x;
        pro -= (lli) x * (lli) x;
    } 
    lli m = 0, r = 0;
    m = (sum + (pro/sum))/2;
    r = m - sum;

    return {m, r};
    // 1 3 4 4 5 => 17 
    // 1 2 3 4 5 => 15
}

/*
1 ^ 3 ^ 5 ^ 4 ^ 4
1 ^ 2 ^ 3 ^ 4 ^ 5

11, 33, 55, 44, (2 ^ 4)
*/