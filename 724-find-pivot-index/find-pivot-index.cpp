class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int leftSum =0;
        int totalSum =0;
        for( int i = 0; i < arr.size(); i++){
           totalSum += arr[i];
        }
        for( int i =0; i< arr.size(); i++){
            int rightSum =  totalSum - leftSum - arr[i];
            if(leftSum == rightSum){
                 return i;
            }
             leftSum += arr[i];
        }
        return -1;
    }
};