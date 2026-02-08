
// sort(nums.begin(), nums.end());
// int count=0;
// int right= nums.size()-1;
// for(int i=right; i<0; i--){
//    int ans= i+ans;
//     if(ans==target){
//         return ans;
//         count++;
//     }
//     else{
//         i--;
//     }
// }

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            while (sum >= target) {
                minLen = min(minLen, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }

        return minLen == INT_MAX ? 0 : minLen;
    }
};




















        // int minLen = numeric_limits<int>::max();
        // int left = 0;
        // int curSum = 0;

        // for (int right = 0; right < nums.size(); right++) {
        //     curSum += nums[right];

        //     while (curSum >= target) {
        //         if (right - left + 1 < minLen) {
        //             minLen = right - left + 1;
        //         }
        //         curSum -= nums[left];
        //         left++;
        //     }
        // }

        // return minLen != numeric_limits<int>::max() ? minLen : 0;      




