class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        // int count=0,i;
        // for(i=0;i<nums.size();i++){
        //     if (nums[i]!=val){
        //         nums[count]=nums[i];
        //         count++;
        //     }
        // }
        // return count;

        int i =0, j= nums.size()-1;
        while(i<=j){
            if(nums[i] == val){
                nums[i]= nums[j];
                j--;
            }else{
                i++;
            }
        }
        return j+1;
    }
  
};