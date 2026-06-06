// class Solution {
// public:
// long long fact(int n ){
    
//  long long f = 1;

//     for (int i = 1; i <= n; i++) {
//         f *= i;
//     }
//     return f;
// }

//     int uniquePaths(int m, int n) {
//       int N= (m-1) + (n-1);
//       int r = m-1;

//       return fact(N)/ (fact(r) * fact(N-r));
//     }
// };

class Solution {
public:
    int uniquePaths(int m, int n) {
        // int N = m + n - 2;
        // int r = min(m - 1, n - 1);

        // long long ans = 1;

        // for (int i = 1; i <= r; i++) {
        //     ans = ans * (N - r + i) / i;
        // }

        // return ans;

        vector<vector<int>> dp(m, vector<int>( n,1));
            for( int i=1; i < m; i++){
                for( int j =1 ; j< n; j++){
                    dp[i][j] = dp[i-1][j] +dp[i][j-1];
                }
            }
        return dp[m-1][n-1];
    }
};