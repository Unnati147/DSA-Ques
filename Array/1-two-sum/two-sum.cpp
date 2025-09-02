class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //   int i,j, n=nums.size();
    //     for ( i=0;i<n;i++)
    //     {
    //         for (j=i+1; j<n; j++)
    //         {
    //             if (nums[i]+nums[j]==target)
    //             {
    //                 return {i,j};
    //             }
    //         }
    //     }
    //     return{-1,-1};

    int n= nums.size();
    unordered_map <int,int> mp;
    for(int i=0;i<n;i++){
        int diffLeft = target-nums[i];
        if(mp.find(diffLeft)!= mp.end()){
            return {mp[diffLeft], i};
        }
        mp[nums[i]] =i;
    }
    return {-1,-1};
      }
};