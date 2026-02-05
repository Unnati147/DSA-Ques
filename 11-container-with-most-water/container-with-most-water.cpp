class Solution {
public:
    int maxArea(vector<int>& arr) {
        int l= 0, r = arr.size()-1;
        int maxarea =0;

        while(l<r){
        int height = min(arr[l], arr[r]);
        int width = r-l;
        maxarea = max(maxarea,height*width);
         if (arr[l] < arr[r]) {
                l++;
            } else {
                r--;
            }
        }
return maxarea;
    }
};