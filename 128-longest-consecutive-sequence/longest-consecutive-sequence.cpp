class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size() == 0) return 0;
       sort (arr.begin(), arr.end());
        int res=1, count=1;
        for (int i=1; i<arr.size(); i++){
            if (arr[i]==arr[i-1])
            continue;
            if (arr[i]==arr[i-1]+1){
                count++;
            }
            else{
                count=1;
            }
            res= max(res,count);
        }
        return res;
 
    }
};