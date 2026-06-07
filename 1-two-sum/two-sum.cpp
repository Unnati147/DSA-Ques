class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i =0 ; i< nums.size(); i++){
            int diffLeft = target - nums[i];
            if(mp.find(diffLeft) != mp.end())
            {
                return {mp[diffLeft], i};
            }else{
                mp[nums[i]]=i;
            }
        }
        return {};
      }
};