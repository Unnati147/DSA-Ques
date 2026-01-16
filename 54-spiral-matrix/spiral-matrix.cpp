class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row = matrix.size();
        int col= matrix[0].size();
        int startRow=0;
        int endCol= col-1;
        int startCol = 0;
        int endRow = row-1;
        int total_elements = row * col;
        int count=0;
         
         while(count < total_elements){
            // print startRow
            for(int i=startCol; i<=endCol && count < total_elements ; i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            // print endCol
            for(int i= startRow; i<= endRow && count < total_elements; i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            // print EndRow

            for(int i=endCol; i>=startCol && count < total_elements; i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            // print StartCol

            for(int i = endRow; i>=startRow && count < total_elements; i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
         }

return ans;


    }
};