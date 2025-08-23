class Solution {
public:
bool dfs(vector<vector<char>>& board, string word, int idx, int i , int j){
    int m = board.size(); 
    int n = board[0].size();
    // base case
    if(idx == word.size()) return true;
    // check out of bound condition
    if(i<0 || j<0 || i>=m || j>=n || board[i][j] != word[idx])
    return false;

    // ek case jo hum krenge
    // mark as visited
    char temp = board[i][j];
    board[i][j]= '#';
    
    // recursion 
    // search in all four direction
    bool found = dfs(board, word, idx+1, i+1, j)||  
                 dfs(board, word, idx+1, i, j+1)||
                 dfs(board, word, idx+1, i-1, j)||
                 dfs(board, word, idx+1, i, j-1);


    // backtrack
    board[i][j] = temp;
    return found;

}

    bool exist(vector<vector<char>>& board, string word) {
      int m = board.size(); 
      int n = board[0].size();

      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(dfs(board, word, 0, i,j))
            return true;
        }
      }
      return false;
        
    }
};