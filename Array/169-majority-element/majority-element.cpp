class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0;   // current element ki frequency count karne ke liye
        int ans = 0;    // potential majority element ko ans me store krenge

        for (int i = 0; i < nums.size(); i++) {
            
            // agar frequency zero hai to naye candidate ko choose kar lo
            if (freq == 0) {
                ans = nums[i];
            }

            // agar current element candidate ke barabar hai
            if (ans == nums[i]) {
                freq++;   // frequency badha do
            }
            else {
                freq--;   // warna frequency ghatado
            }
        }

        // loop ke baad 'ans' majority element hoga
        return ans;
    }
};
