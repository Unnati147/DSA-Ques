class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        // base case handle
        if (matrix.empty() || matrix[0].empty()) return {};
        // step 1: group by i+j
        int m = matrix.size(), n = matrix[0].size();
       unordered_map <int, vector<int>> mp;
       for(int i=0; i<m; i++){
        for (int j=0;j<n;j++){
            mp[i+j].push_back(matrix[i][j]);
        }
       }
    //    step 2 : collect results, store in ans vector
       vector<int> ans;
       for(int d=0; d<= m+n-2; d++){
        if(d%2==0){
            // reverse if d is even
            reverse(mp[d].begin(), mp[d].end());
        }
        for(int x: mp[d]){
            ans.push_back(x);
        }
       }
       return ans;
    }
};
