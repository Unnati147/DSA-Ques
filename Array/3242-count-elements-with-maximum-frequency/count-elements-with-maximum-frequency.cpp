
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> freq;   // element -> frequency

        // 1) Frequency count
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        // 2) Max frequency nikaalo
        int maxFreq = 0;
        for(auto it : freq) {
            if(it.second > maxFreq) {
                maxFreq = it.second;
            }
        }

        // 3) Total count of all elements with max frequency
        int total = 0;
        for(auto it : freq) {
            if(it.second == maxFreq) {
                total += it.second; // jitni baar aaya hai, sab add kardo
            }
        }

        return total;
    }
};
