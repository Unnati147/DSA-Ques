class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;

        int totalSum = (n*(n+1))/2;
        for(int i =0 ; i<n ; i++){
            sum = sum + nums[i];
        }
        // also use numeric stl for addition of all elemnts int the array
        // int sum = accumulate(nums.begin(),nums.end(),0);
        int result = totalSum - sum;
        return result;
    
    }
};