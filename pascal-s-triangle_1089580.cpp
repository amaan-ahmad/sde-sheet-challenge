#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> output;    

    for(int i = 0; i < n; i++) {
        vector<long long int> curr(i + 1, 1);
        for(int j = 1; j < i; j++) {
            curr[j] = output[i-1][j] + output[i-1][j-1];                       
        }
        output.push_back(curr);
    }
        
    return output;
}
