#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
        int r = matrix.size();
        int c = matrix[0].size();
        
        vector<bool> rm(r, false);
        vector<bool> cm(c, false);
        
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(matrix[i][j] == 0) {
                    rm[i] = true;
                    cm[j] = true;
                }
            }
        }
        
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(rm[i]) {
                    matrix[i][j] = 0;
                }
                if(cm[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
}