class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDia =0;
        int maxArea =0;

        for(int i=0; i<dimensions.size(); i++){
        int l = dimensions[i][0];
        int w = dimensions[i][1];

        // sirf comapre krna h isiliye hum ^ ki * kr rhe h or sqrt nhi lga rhe 
        // computational time km krne ko
        int currDiag= l*l + w*w;
        int area = l*w;
        
        if(currDiag > maxDia){
            maxDia = currDiag;
            maxArea = area;
        }else if(currDiag == maxDia){
            maxArea = max(maxArea, area);
        }
        }
        return maxArea;
    }
};