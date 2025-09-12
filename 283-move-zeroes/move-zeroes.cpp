class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // i se array pe traverse krnege 
        // agr non zero element milta h to use j pe dal delnge or j increment
        int j=0;
        for(int i =0 ; i< nums.size(); i++){
            if(nums[i]!= 0){
                nums[j] = nums[i];
                j++;
            }
        }
        // jb sare non zero ho jayenge to j se array ke size tk me 
        // bche hue element me 0 dal denge
        while(j<nums.size()){
            nums[j] = 0; 
            j++;
        }
    }
};