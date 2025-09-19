class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int currSum =0 ;
        int maxSum = INT_MIN;
        
        for(int i = 0 ; i< arr.size(); i++){
            currSum += arr[i];   // Add current element to running sum
            maxSum= max(maxSum, currSum); // Update maximum if current sum is greater

            
        // If running sum becomes negative, reset it
        // because continuing with a negative sum will only reduce future sums
            if(currSum < 0){
                currSum=0;
            }
        }
        return maxSum;
    }
};