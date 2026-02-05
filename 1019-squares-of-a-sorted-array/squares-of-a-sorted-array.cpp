class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    //     vector<int> ans;
    //    for(int i =0; i< nums.size(); i++){
    //      ans.push_back(nums[i]*nums[i]);
       
    //    } 
    //     sort(ans.begin(), ans.end());
    //     return ans;

    // optimised

    int n= nums.size();
    int l = 0, r= n-1;
    int index= n-1;
  
    vector<int>result(n);

    while(l<=r){
       int lsq = nums[l]*nums[l];
       int rsq = nums[r]*nums[r];

       if(lsq>rsq){
        result[index--] = lsq;
        l++;
       }else{
        result[index--] = rsq;
        r--;
       }

    }
    return result;
    }
};