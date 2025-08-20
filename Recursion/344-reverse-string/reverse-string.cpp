class Solution {
public:

void helper(vector<char>& s , int start, int end){
    if( start>= end)
    return;

    swap(s[start], s[end]);

    helper(s, start+1, end-1);
}
    void reverseString(vector<char>& s) {
        int start=0;
       int end= s.size()-1;
        helper(s, start, end);
    // //     int i;
    // //     int j;
    // //     for (i=0, j=s.size()-1;i<s.size()/2; i++,j--){
    // //     char temp =s[i];
    // //     s[i]=s[j];
    // //     s[j]=temp;
    // //     }
        
    // //
    // int i=0, j= s.size()-1;
    // while(i<=j){
    //     swap(s[i], s[j]);
    //     i++;
    //     j--;
    // }
         }
};