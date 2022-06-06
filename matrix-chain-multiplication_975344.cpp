
int f(vector<int> &arr, int i, int j, vector<vector<int>> &memo) {
    if(i == j) return 0;
    if(memo[i][j] != -1) return memo[i][j];
    int mini = INT_MAX;
    for(int k = i; k < j; k++) {
        mini = min(mini, (arr[i-1] * arr[k] * arr[j]) + f(arr, i, k, memo) + f(arr, k+1,j, memo));
    }
    return memo[i][j] = mini;
}


int matrixMultiplication(vector<int> &arr, int N)
{
    vector<vector<int>> memo(N, vector<int>(N, -1));
    return f(arr, 1, N-1, memo);
}