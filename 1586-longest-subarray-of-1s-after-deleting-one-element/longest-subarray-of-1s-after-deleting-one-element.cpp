class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // initialise kr diye variables
        int zeroCount=0;
        int maxLen=0;
        int left=0, right=0;
        // fir hum loop lgayenge or check krenge ki right pointer pe 0 to nhi h agr h to zeroCount++
        // fir ek lop se check krenge agr zeroCount >1 h to left pounter++ or zeroCount ko ek km kr denge
        for(int right=0; right< nums.size(); right++){
            if(nums[right]==0) zeroCount++;
            while(zeroCount>1){
                if(nums[left]==0) zeroCount--;
                left++;
            }
            // maximum nikalne ke liye wese to window size right-left+1 hota h pr hum
            // use kr rhe h right - left iska mtlb already ek elemnt hta dia h 
            maxLen= max(maxLen, right-left);
        }
        return maxLen;
    }
};