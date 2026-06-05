class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int m = matrix.size();
        // int n = matrix[0].size();
        // int left = 0, right = m * n - 1;

        // while (left <= right) {
        //     int mid = (right+left)/2;
        //     int mid1 = matrix[mid / n][mid % n];

        //     if (mid1 == target)
        //         return true;
        //     else if (mid1 < target)
        //         left = mid + 1;
        //     else
        //         right = mid - 1;
        // }
        // return false;

        // int row = matrix.size();
        // int col= matrix[0].size();
        // int n = row*col;
        // int s=0 , e= n-1;

        // int  mid = (s+e)/2;
        // while(s<=e){
        //     int rowIndex= mid/col;
        //     int colIndex= mid%col;
        //     int currNumber= matrix[rowIndex][colIndex];

        //     if(currNumber==target){
        //         return true;
        //     }
        //     else if(target>currNumber){
        //         s= mid+1;
        //     }
        //     else {
        //         e= mid-1;
        //     }
            
        // mid = (s+e)/2;
        // }
        // return false;


int row = matrix.size();
int col = matrix[0].size();

int s= 0;
int n= row*col;
int e= n-1;


while (s<=e){
    int mid = (s+e)/2;
    int rowIndex = mid/col;
    int colIndex= mid%col;
    int currNum = matrix[rowIndex][colIndex];
    
    if(currNum == target){
        return true;
    }else if(currNum <= target){
        s= mid+1;
    }
    else{
        e= mid-1;
    }

}
return false;
    }
};