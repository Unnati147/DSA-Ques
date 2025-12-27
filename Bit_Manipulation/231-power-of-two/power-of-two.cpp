class Solution {
public:
    bool isPowerOfTwo(int n) {
        // int count=0;
        // while(n!=0){
        //     int lastbit= n&1;
        //     if(lastbit){
        //         count++;
        //     }
        //     n=n>>1;
        // }
        // if(count ==1){
        //     return true;
        // }else{
        //     return false;
        // }
         if (n <= 0) return false;
        if((n & (n-1)) == 0){
            return true;
        }else{
            return false;
        }
    }
};