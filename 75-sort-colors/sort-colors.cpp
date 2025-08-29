 class Solution {
 public:
      void sortColors(vector<int>& nums) {
    //   int n= nums.size();
    //   int count0s=0;
    //   int count1s=0;
    //   int count2s=0;
    //   for(int i=0; i<n ; i++){
    //     if(nums[i]==0) count0s++;
    //     else if(nums[i] == 1) count1s++;
    //     else count2s++;
    //   }

    //   int idx=0;
    //   for(int i =0; i<count0s; i++){
    //     nums[idx++] =0;
    //   }
    //   for(int i =0; i<count1s; i++){
    //     nums[idx++] =1;
    //   }
    //   for(int i =0; i<count2s; i++){
    //     nums[idx++] =2;
    //   }

    int n= nums.size();
    int left = 0;
    int index=0;
    int right = n-1;

    while(index <= right){
        if(nums[index] == 0 ){
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if(nums[index]==2){
            swap(nums[index], nums[right]);
            right--;
        }
        else{
            index++;
        }
    }
    
      }
};