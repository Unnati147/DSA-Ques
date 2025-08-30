class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_set <int> s;
        // int n = nums.size();
        // for(int i =0 ; i< n ; i++){
        //         if(s.find(nums[i]) != s.end()){
        //            return nums[i];
        //         }
        //         else{
        //             s.insert(nums[i]);
        //         }
        // }
        // return -1;

        while(nums[0] != nums[nums[0]]){
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};