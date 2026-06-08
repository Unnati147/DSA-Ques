class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    //     if(arr.size() == 0) return 0;
    //    sort (arr.begin(), arr.end());
    //     int res=1, count=1;
    //     for (int i=1; i<arr.size(); i++){
    //         if (arr[i]==arr[i-1])
    //         continue;
    //         if (arr[i]==arr[i-1]+1){
    //             count++;
    //         }
    //         else{
    //             count=1;
    //         }
    //         res= max(res,count);
    //     }
    //     return res;
 unordered_set<int> st(nums.begin(), nums.end());

 int longest = 0 ;
 int len = 1;

 for( int it: st){
    if(st.find(it - 1) == st.end()){
        int currNum=it;
        len =1;
        while(st.find(currNum +1) != st.end()){
            currNum++;
            len++;
        }
    } 
    longest = max(longest, len);
 }
return longest;

    }
};